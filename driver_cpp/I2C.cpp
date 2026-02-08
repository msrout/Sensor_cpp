#include "I2C.hpp"

void I2C::init() {}

uint8_t I2C::read(uint8_t, uint16_t addr)
{
    if (addr == 0x0000)
        return 1; // HW_REV_B
    return 0;
}