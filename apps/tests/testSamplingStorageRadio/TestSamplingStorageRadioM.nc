/*
 * Copyright (c) 2006
 *	The President and Fellows of Harvard College.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE UNIVERSITY AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE UNIVERSITY OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/**
 * <pre>URL: http://www.eecs.harvard.edu/~konrad/projects/shimmer</pre>
 * @author Konrad Lorincz
 * @version 1.0, November 10, 2006
 */
#include "MultiChanSampling.h"
#include "SamplingMsg.h"
#include "TestSamplingStorageRadio.h"


module TestSamplingStorageRadioM 
{
    provides interface StdControl;
 
    uses interface Leds;
    uses interface LocalTime;
    uses interface Pool<TOS_Msg> as TOSMsgMemPool;

    uses interface MultiChanSampling;
    uses interface SD;
    uses interface SendMsg;
}
implementation
{
    // ======================= Data ==================================
    TOS_Msg*      currTOSMsgPtr;
    SamplingMsg*  currSamplingMsgPtr;
    uint8_t       sampleIndex;                            
    
    uint16_t      sqnNbr = 0;

    time_t startTime = 0;
    time_t elapsedTime = 0;
    sample_t buffSamples[NBR_ADC_CHANS];

    // SD
    enum {SD_MAX_NBR_SECTORS = 50};  // make it smaller to test circular buff
    uint8_t sdWriteBuff[512];
    uint8_t sdReadBuff[512];
    uint32_t nextWriteSector = 0;
    uint32_t nextReadSector = 0;

    // ======================= Methods ===============================
    inline void sendMsg(TOS_Msg *sendMsgPtr, uint16_t sendAddr, uint8_t dataSize);

    command result_t StdControl.init() 
    {
        call Leds.init(); 
        startTime = call LocalTime.read();

        call TOSMsgMemPool.init();
        atomic currTOSMsgPtr = call TOSMsgMemPool.alloc();

        if (currTOSMsgPtr == NULL)
            return FAIL;
        else {
            atomic {
                currSamplingMsgPtr = (SamplingMsg*) &(currTOSMsgPtr->data);
                currSamplingMsgPtr->srcAddr = TOS_LOCAL_ADDRESS;
                currSamplingMsgPtr->timeStamp = 0;
                currSamplingMsgPtr->nbrSamples = 0;
                sampleIndex = 0;
                sqnNbr= 0;
                
                nextWriteSector = 0;
                nextReadSector = 0;
                return SUCCESS;
            }
        }
    }
  
    command result_t StdControl.start() 
    {   
        return call MultiChanSampling.startSampling(ADC_CHANS, NBR_ADC_CHANS, SAMPLING_RATE_HZ);
    }

    command result_t StdControl.stop() {return SUCCESS;}

    task void readSD()
    {                    
        if (call SD.readSector(nextReadSector, (uint8_t*)sdReadBuff) == 0) {// NOTE: 0 means SUCCESS!!!
            TOS_Msg *nextTOSMsgPtr = call TOSMsgMemPool.alloc();
            
            if (nextTOSMsgPtr == NULL) {  // out of memory
                return;
            }
            else {            
                memcpy(nextTOSMsgPtr, sdReadBuff, sizeof(TOS_Msg));
                sendMsg(nextTOSMsgPtr, TOS_BCAST_ADDR, sizeof(SamplingMsg));
            }
        }          
    }

    inline void writeSD(TOS_Msg *tosMsgPtr)
    {                                 
        memcpy(sdWriteBuff, tosMsgPtr, sizeof(TOS_Msg));
        if (call SD.writeSector(nextWriteSector, (uint8_t*)sdWriteBuff) == 0) { // NOTE: 0 means SUCCESS!!!
            atomic {
                nextReadSector = nextWriteSector;
                nextWriteSector = (nextWriteSector+1) % SD_MAX_NBR_SECTORS;
            }
            post readSD();
        }

        call TOSMsgMemPool.free(tosMsgPtr);
    }

    inline void addSample(sample_t samples[], uint8_t nbrChannels) 
    {   
        // (1) - Get the new buffer if this one is full
        if (sampleIndex + nbrChannels > SAMPLINGMSG_MAX_SAMPLES) {
            TOS_Msg *nextTOSMsgPtr = call TOSMsgMemPool.alloc();
            
            if (nextTOSMsgPtr == NULL) {  // out of memory
                return;
            }
            else {
                // (a) Swap buffers
                TOS_Msg *sendTOSMsgPtr = currTOSMsgPtr;                
                call Leds.greenToggle();
                atomic {
                    currTOSMsgPtr = nextTOSMsgPtr;
                    currSamplingMsgPtr = (SamplingMsg*) &(currTOSMsgPtr->data);
                    currSamplingMsgPtr->srcAddr = TOS_LOCAL_ADDRESS;
                    currSamplingMsgPtr->sqnNbr = sqnNbr++;
                    currSamplingMsgPtr->timeStamp = call LocalTime.read() - startTime;
                    currSamplingMsgPtr->nbrSamples = 0;
                    sampleIndex = 0;
                }

                // (b) Write to SD
                writeSD(sendTOSMsgPtr);
                //sendMsg(sendTOSMsgPtr, TOS_BCAST_ADDR, sizeof(SamplingMsg));
            }
        }
        
        // (2) - Add the sample to the buffer
        atomic {
            currSamplingMsgPtr->nbrSamples += nbrChannels;
            memcpy(&(currSamplingMsgPtr->samples[sampleIndex]), samples, nbrChannels*sizeof(sample_t));
            sampleIndex += nbrChannels;
        }
    }   

    event void MultiChanSampling.dataReady(sample_t samples[], uint8_t nbrChannels, result_t result)
    {  
        addSample(samples, nbrChannels);
    }

    inline void sendMsg(TOS_Msg *sendMsgPtr, uint16_t sendAddr, uint8_t dataSize)
    {   
        call Leds.redOn();

        if (call SendMsg.send(sendAddr, dataSize, sendMsgPtr) == FAIL) {
            // send FAILED, so free up memory
            call TOSMsgMemPool.free(sendMsgPtr);
        }
    }

    event result_t SendMsg.sendDone(TOS_MsgPtr msgPtr, result_t sendResult)
    {
        if (sendResult == SUCCESS) { // message sent succesfully
            call Leds.redOff();
        }
    
        call TOSMsgMemPool.free(msgPtr);
        return sendResult;
    }
}


