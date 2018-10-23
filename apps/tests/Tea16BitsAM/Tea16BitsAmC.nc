#include "printf.h"
#include "Packge.h"
#include "mts300.h"
#include "Mma_Accel.h"
#include "hardware.h"
#include "platform.h"
#include <I2C.h>

module Tea16BitsAmC @safe() {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface Leds;
    interface Read<uint16_t> as Read;
    interface TEA;
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
  }
}
implementation {
  bool locked;
  bool DEBUG = FALSE;
  bool DATA = FALSE;
  int TIMER_PERIOD_MILLI = 500;
  int i      = 0;
  uint8_t v0 = 0;
  uint8_t v1 = 0;
  uint16_t a = 0;
  uint16_t b = 0;
  message_t pkt;
  uint16_t sbuf0[60];

  event void Boot.booted() {
    call SplitControl.start();
  }

  event void Timer.fired() {
    
    call shimmerAnalogSetup.addAccelInputs();
    call Accel.setSensitivity(RANGE_6_0G);
    call Accel.wake(TRUE);
   // call shimmerAnalogSetup.addGyroInputs();
    call shimmerAnalogSetup.finishADCSetup(sbuf0);
    // call AccelX.read();

    call Leds.led0On();
    call Read.read();
    call Leds.led0Off();

    if (DEBUG)
      printf("V0 0x%x V1 0x%x\n", v0,v1);
    
    call Leds.led1On();
    a = call TEA.encrypt(v0, v1);
    call Leds.led1Off();
    if (DEBUG){
      printf("Encrypt 0x%x\n", a);
    }

    v0 = call TEA.msb(a);
    v1 = call TEA.lsb(a);
    //   b =  call TEA.decrypt(v0, v1);
    //   printf("Decrypt 0x%x\n\n", b);
    
    if (!locked) {
      PktMsg* btrpkt = (PktMsg*)(call Packet.getPayload(&pkt, sizeof (PktMsg)));
      btrpkt->nodeid = TOS_NODE_ID;
      btrpkt->data[0] = v0;
      btrpkt->data[1] = v1;
      
      if (DATA){
        printf("len %d id %d p[0] %d p[1] %d\n",sizeof (PktMsg), btrpkt->nodeid ,btrpkt->data[0],btrpkt->data[1]);
      }
      if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(PktMsg)) == SUCCESS) {
        call Leds.led2On();
        locked = TRUE;
        if (DEBUG){
          printf("SUCCESS\n");
        }
      }
    }
    printfflush();
  }

//event void      readDone(error_t result, val_t val );
  event void Read.readDone(error_t result, uint16_t data){
    if (result == SUCCESS){
      v0 = call TEA.msb(data);
      v1 = call TEA.lsb(data);
    }
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    if (&pkt == bufPtr) {
      call Leds.led2Off();
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
  
  


  //event void AccelStream.bufferDone(error_t result,  uint16_t *buff, uint16_t data){}

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
    call Leds.led1Off();
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