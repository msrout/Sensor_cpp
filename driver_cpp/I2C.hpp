#pragma once
#include <cstdint>

class I2C
{
public:
    void init();
    uint8_t read( uint16_t addr);
};