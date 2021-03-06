#include "printf.h"
#include "Packge.h"
#include <I2C.h>

module XXTea16BitsAmC @safe() {
  uses {
    interface Boot;
    interface Timer<TMilli>;
    interface Leds;
    interface Read<uint16_t> as Read;
    interface XXTEA;
    interface AMSend;
    interface SplitControl;
    interface Packet;
  }
}
implementation {
  bool locked;
  bool DEBUG = FALSE;
  bool DATA = FALSE;
  int TIMER_PERIOD_MILLI = 500;
  int i      = 0;
  message_t pkt;
  uint8_t RBuffer[2];

  event void Boot.booted() {
    call SplitControl.start();
  }

  event void Timer.fired() {
    call Leds.led0On();
    call Read.read();
    call Leds.led0Off();

    //if (DEBUG) printf("input %d %d\n", RBuffer[0],RBuffer[1]);
    
    call Leds.led1On();
    call XXTEA.encrypt(RBuffer, sizeof(RBuffer));
    call Leds.led1Off();
    //if (DEBUG) printf("Encrypt %d %d\n", RBuffer[0],RBuffer[1]);

    //call XXTEA.decrypt(RBuffer, sizeof(RBuffer));
    // if (DEBUG) printf("Decrypt %d %d\n", RBuffer[0],RBuffer[1]);
    
    if (!locked) {
      PktMsg* btrpkt = (PktMsg*)(call Packet.getPayload(&pkt, sizeof (PktMsg)));
      btrpkt->nodeid = TOS_NODE_ID;
      btrpkt->data[0] = RBuffer[0];
      btrpkt->data[1] = RBuffer[1];
      
      if (DATA){
        printf("len %d id %d p[0] %d p[1] %d\n",sizeof (PktMsg), btrpkt->nodeid ,btrpkt->data[0],btrpkt->data[1]);
      }
      if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(PktMsg)) == SUCCESS) {
        call Leds.led2On();
        locked = TRUE;
        if (DEBUG) printf("SUCCESS\n");
      }
    }
    printfflush();
  }
//event void      readDone(error_t result, val_t val );
  event void Read.readDone(error_t result, uint16_t data){
    if (result == SUCCESS){
      RBuffer[0] = call XXTEA.msb(data);
      RBuffer[1] = call XXTEA.lsb(data);
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
}
