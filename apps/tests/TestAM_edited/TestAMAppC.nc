#define NEW_PRINTF_SEMANTICS
#include "printf.h"
#include "Packge.h"
configuration TestAMAppC {}
implementation {
  components MainC, PrintfC, SerialStartC, TestAMC as App, LedsC;
  components ActiveMessageC;
  components new TimerMilliC();
    
  App.Boot -> MainC.Boot;
  App.Receive -> ActiveMessageC.Receive[240];
  App.AMSend -> ActiveMessageC.AMSend[240];
  App.SplitControl -> ActiveMessageC;
  App.Leds -> LedsC;
  App.MilliTimer -> TimerMilliC;
  App.Packet -> ActiveMessageC.Packet;
}


