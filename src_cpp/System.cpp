#include "System.hpp"

System::System(ADC& adc,
               Timer& timer,
               I2C& i2c,
               EEPROM& eeprom)
    : adc_(adc),
      timer_(timer),
      i2c_(i2c),
      eeprom_(eeprom)
{
}

void System::init()
{
    i2c_.init();
    eeprom_.readHwRevision();  // optional warm-up
    adc_.init();
    timer_.init();
}