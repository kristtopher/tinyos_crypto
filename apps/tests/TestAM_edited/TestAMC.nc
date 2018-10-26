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
  }
}
implementation {
  message_t packet;
  PktMsg *rcm ;

  
  event void Boot.booted() {
    call SplitControl.start();
  }
  
  event void MilliTimer.fired() {
    //call Leds.led0Off();
    if (call AMSend.send(AM_BROADCAST_ADDR, &packet, 0) == SUCCESS) {
      //call Leds.led0On();
    }
  }

  event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
    
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {

  }

  event void SplitControl.startDone(error_t err) {
    call MilliTimer.startPeriodic(1);
  }

  event void SplitControl.stopDone(error_t err) {}
}




