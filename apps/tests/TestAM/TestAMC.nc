// $Id: TestAMC.nc,v 1.5 2010-06-29 22:07:20 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the University of California nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
 

/**
 * Implementation of the TestAM application.  TestAM sends active message 
 * broadcasts at 1Hz and blinks LED 0 whenever it has sucessfully sent a 
 * broadcast. Whenever it receives one of these broadcasts from another 
 * node, it blinks LED 1.  It uses the radio HIL component <tt>ActiveMessageC</tt>, 
 * and its packets are AM type 240.  This application is useful for testing 
 * AM communication and the ActiveMessageC component.
 *
 * @author Philip Levis
 * @date   May 16 2005
 */

#include "Timer.h"
#include "printf.h"
#include "Packge.h"

module TestAMC {
  uses {
    interface Leds;
    interface Boot;
    interface Receive;
    interface AMSend;
    interface Timer<TMilli> as MilliTimer;
    interface SplitControl;
    interface Packet;
    interface TEA;
    interface RC4;
    interface XXTEA;
  }
}
implementation {
  message_t packet;
  PktMsg *rcm ;
  uint8_t v0 = 0;
  uint8_t v1 = 0;
  uint16_t d = 0;
  uint8_t RBuffer[2];
  int Modo = 1;// modo  0 tea 1 XXTEA 2 RC4

  bool locked;
  uint8_t counter = 0;
  
  event void Boot.booted() {
    call SplitControl.start();
  }
  
  event void MilliTimer.fired() {
    counter++;
    // call Leds.led0On();
    // if (locked) {
    //   return;
    //  }
    // else if (call AMSend.send(AM_BROADCAST_ADDR, &packet, 0) == SUCCESS) {
    //	printf("SUCCESS\n");
    //   call Leds.led0On();
    //   locked = TRUE;
    // }
  }

  event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
    call Leds.led1On();
    if (len != sizeof(PktMsg))  return bufPtr;
    else{
      rcm = (PktMsg*)payload;
      if (Modo == 0){
      	d =  call TEA.decrypt(rcm->data[0],rcm->data[1]);
  	    printf("%d\n",d );
  	    v0 = call TEA.msb(d);
  	    v1 = call TEA.lsb(d);
  	    printf("TEA %d %d data %d\n", v0,v1,d);
      }
      else if (Modo == 1){
        RBuffer[0] = rcm->data[0];
        RBuffer[1] = rcm->data[1];
        
        call XXTEA.decrypt(RBuffer, sizeof(RBuffer));
        printf("XXTEA decrypt %d %d\n",RBuffer[0] ,RBuffer[1]);
      }
      else if (Modo == 2){
      	RBuffer[0] = rcm->data[0];
      	RBuffer[1] = rcm->data[1];
      	call RC4.rc4(RBuffer, sizeof(RBuffer));
      	printf("RC4 %d %d\n", RBuffer[0] ,RBuffer[1]);
      }

    call Leds.led1Off();
    return bufPtr;
    }
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    if (&packet == bufPtr) {
      locked = FALSE;
    }
  }

  event void SplitControl.startDone(error_t err) {
    call MilliTimer.startPeriodic(100);
  }

  event void SplitControl.stopDone(error_t err) {}
}




