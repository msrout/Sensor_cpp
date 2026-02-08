#pragma once
#include <cstdint>

class I2C
{
public:
    void init();
    uint8_t read(uint8_t dev, uint16_t addr);
};