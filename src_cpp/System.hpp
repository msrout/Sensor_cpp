#pragma once

#include "../driver_cpp/ADC.hpp"
#include "../driver_cpp/Timer.hpp"
#include "../driver_cpp/I2C.hpp"
#include "../driver_cpp/EEPROM.hpp"

class System
{
public:
    System(ADC& adc,
           Timer& timer,
           I2C& i2c,
           EEPROM& eeprom);

    void init();

private:
    ADC& adc_;
    Timer& timer_;
    I2C& i2c_;
    EEPROM& eeprom_;
};