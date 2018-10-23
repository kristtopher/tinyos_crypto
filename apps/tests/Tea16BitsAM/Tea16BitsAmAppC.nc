#define NEW_PRINTF_SEMANTICS
#include "printf.h"
#include "Packge.h"
#include "mts300.h"
#include "Mma_Accel.h"
#include "hardware.h"
#include "platform.h"
#include <I2C.h>

configuration Tea16BitsAmAppC{
}
implementation {
  components MainC, PrintfC,SerialStartC, LedsC, TEAC;
  components new DemoSensorC() as Sensor;
  components ActiveMessageC;
  components new TimerMilliC();
  components Tea16BitsAmC as Tea;
  
  components AccelC;
  components shimmerAnalogSetupC;
  components Msp430DmaC;
  components GyroBoardC;
 
  Tea.Boot            -> MainC;
  Tea.Timer           -> TimerMilliC;
  Tea.Leds            -> LedsC;
  Tea.Read            -> Sensor;
  Tea.TEA             -> TEAC;
  Tea.AMSend          -> ActiveMessageC.AMSend[240];
  Tea.Packet          -> ActiveMessageC.Packet;
  Tea.SplitControl    -> ActiveMessageC;


  Tea.DMA0            -> Msp430DmaC.Channel0;
  MainC.SoftwareInit  -> shimmerAnalogSetupC.Init;
  Tea.shimmerAnalogSetup -> shimmerAnalogSetupC;
  Tea.AccelInit       -> AccelC;
  Tea.Accel           -> AccelC;
  Tea.GyroInit        -> GyroBoardC;
  Tea.GyroStdControl  -> GyroBoardC;
  Tea.GyroBoard       -> GyroBoardC;
}