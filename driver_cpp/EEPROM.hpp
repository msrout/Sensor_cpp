#pragma once
#include "I2C.hpp"

enum class HwRev { A, B };

class EEPROM
{
public:
    EEPROM(I2C& i2c) : i2c_(i2c) {}
    HwRev readHwRevision();

private:
    I2C& i2c_;
};