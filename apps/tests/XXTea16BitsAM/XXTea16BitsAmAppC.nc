#define NEW_PRINTF_SEMANTICS
#include "printf.h"
#include "Packge.h"
#include <I2C.h>

configuration XXTea16BitsAmAppC{
}
implementation {
  components MainC, PrintfC,SerialStartC, LedsC, XXTEAC;
  components new DemoSensorC() as Sensor;
  components ActiveMessageC;
  components new TimerMilliC();
  components XXTea16BitsAmC as XXTea;

 
  XXTea.Boot -> MainC;
  XXTea.Timer -> TimerMilliC;
  XXTea.Leds -> LedsC;
  XXTea.Read -> Sensor;
  XXTea.XXTEA -> XXTEAC;
  XXTea.AMSend -> ActiveMessageC.AMSend[240];
  XXTea.Packet -> ActiveMessageC.Packet;
  XXTea.SplitControl -> ActiveMessageC;
}