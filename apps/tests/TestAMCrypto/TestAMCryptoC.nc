#include "printf.h"
#include "Packge.h"
#include "mts300.h"
#include "Mma_Accel.h"
#include "hardware.h"
#include "platform.h"
#include <I2C.h>

module TestAMCryptoC @safe() {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface Leds;
    interface Read<uint16_t> as Read;
    interface CRYPTO;
    interface AMSend;
    interface SplitControl;
    interface Packet;

    interface shimmerAnalogSetup;
    interface Msp430DmaChannel as DMA0;
    interface StdControl as AccelStdControl;
    interface Mma_Accel as Accel;
    interface Init as AccelInit;
    interface Init as GyroInit;
    interface StdControl as GyroStdControl;
    interface GyroBoard;
    interface LocalTime<TMilli>;
  }
}
implementation {
  bool locked;
  int TIMER_PERIOD_MILLI = 1;
  unsigned char pt[8]= {0x28, 0x85, 0x84, 0x2e, 0xa3, 0xe6, 0x99, 0x9b};
  uint32_t begin = 0;
  uint32_t end = 0;
  int i = 0;
  uint16_t RES = 0;
  message_t pkt;
  uint16_t sbuf0[60];

  event void Boot.booted() {
    call SplitControl.start();
  }

  event void Timer.fired() {
    //call Leds.led0Off();
    call shimmerAnalogSetup.addAccelInputs();
    call Accel.setSensitivity(RANGE_6_0G);
    call Accel.wake(TRUE);

    call shimmerAnalogSetup.finishADCSetup(sbuf0);

    call Read.read();
    

    begin = call Timer.getNow();
    RES = call CRYPTO.xxtea_encrypt(pt,8);
    end = call Timer.getNow();
    printf("time xxtea_encrypt: %d\n",end-begin);


    if (!locked) {
      PktMsg* btrpkt = (PktMsg*)(call Packet.getPayload(&pkt, sizeof (PktMsg)));
      btrpkt->nodeid = TOS_NODE_ID;
      btrpkt->data[0] = call CRYPTO.lsb(RES);
      btrpkt->data[1] = call CRYPTO.msb(RES);
      
      if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(PktMsg)) == SUCCESS) {
        locked = TRUE;
        //call Leds.led0On();
      }
    }
    printfflush();
  }

  event void Read.readDone(error_t result, uint16_t data){
    if (result == SUCCESS){}
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    if (&pkt == bufPtr) {
      locked = FALSE;
    }
  }

  event void SplitControl.startDone(error_t err) {
    if (err == SUCCESS) {
      call Timer.startPeriodic(TIMER_PERIOD_MILLI);
    }
    else {
      call SplitControl.start();
    }
  }

  event void SplitControl.stopDone(error_t err){}
  
  task void startSensing() {
    call GyroInit.init();
    call GyroStdControl.start();
    call Accel.setSensitivity(RANGE_6_0G);
    call Accel.wake(TRUE);
  }

  task void stopSensing() {
    call shimmerAnalogSetup.stopConversion();
    call DMA0.stopTransfer();
    call Accel.wake(FALSE);
    call GyroStdControl.stop();
  } 

  async event void GyroBoard.buttonPressed() { }

  async event void DMA0.transferDone(error_t success) {
  //   dma_blocks++;
  //   //atomic DMA0DA += 12;
  //   if(dma_blocks == 1){ //this should be about 6 but for this test its 1
  //     dma_blocks = 0;
  //     if(current_buffer == 0){
  //       call DMA0.repeatTransfer((void*)ADC12MEM0_, (void*)sbuf1, NUM_ADC_CHANS);
  //       atomic timestamp1 = call LocalTime.get();
  //       current_buffer = 1;
  //     }
  //     else { 
  //       call DMA0.repeatTransfer((void*)ADC12MEM0_, (void*)sbuf0, NUM_ADC_CHANS);
  //       atomic timestamp0 = call LocalTime.get();
  //       current_buffer = 0;
  //     }
  //     post sendSensorData();      
  //   }
  }
}