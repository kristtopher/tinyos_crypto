#define NEW_PRINTF_SEMANTICS
#include "printf.h"
#include "Packge.h"
#include <I2C.h>

configuration RC4_16BitsAmAppC{
}
implementation {
  components MainC, PrintfC,SerialStartC, LedsC, RC4C;
  components new DemoSensorC() as Sensor;
  components ActiveMessageC;
  components new TimerMilliC();
  components RC4_16BitsAmC as rc4;

 
  rc4.Boot -> MainC;
  rc4.Timer -> TimerMilliC;
  rc4.Leds -> LedsC;
  rc4.Read -> Sensor;
  rc4.RC4 -> RC4C;
  rc4.AMSend -> ActiveMessageC.AMSend[240];
  rc4.Packet -> ActiveMessageC.Packet;
  rc4.SplitControl -> ActiveMessageC;
}