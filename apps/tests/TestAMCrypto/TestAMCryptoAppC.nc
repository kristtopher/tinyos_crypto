#define NEW_PRINTF_SEMANTICS
#include "printf.h"
#include "Packge.h"
#include "mts300.h"
#include "Mma_Accel.h"
#include "hardware.h"
#include "platform.h"
#include <I2C.h>

configuration TestAMCryptoAppC{
}
implementation {
  components MainC, PrintfC,SerialStartC, LedsC;
  components new DemoSensorC() as Sensor;
  components ActiveMessageC;
  components new TimerMilliC();
  components TestAMCryptoC as App;
  components CRYPTOC;
  
  components AccelC;
  components shimmerAnalogSetupC;
  components Msp430DmaC;
  components GyroBoardC;
  components LocalTimeMilliC;
  App.LocalTime -> LocalTimeMilliC;
 
  App.Boot            -> MainC;
  App.Timer           -> TimerMilliC;
  App.Leds            -> LedsC;
  App.Read            -> Sensor;
  App.AMSend          -> ActiveMessageC.AMSend[240];
  App.Packet          -> ActiveMessageC.Packet;
  App.SplitControl    -> ActiveMessageC;
  App.CRYPTO          -> CRYPTOC;


  App.DMA0            -> Msp430DmaC.Channel0;
  MainC.SoftwareInit  -> shimmerAnalogSetupC.Init;
  App.shimmerAnalogSetup -> shimmerAnalogSetupC;
  App.AccelInit       -> AccelC;
  App.Accel           -> AccelC;
  App.GyroInit        -> GyroBoardC;
  App.GyroStdControl  -> GyroBoardC;
  App.GyroBoard       -> GyroBoardC;
}