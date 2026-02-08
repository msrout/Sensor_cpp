#pragma once
#include <cstdint>

class ADC
{
public:
    void init();
    uint16_t read();

private:
    uint16_t value_ = 400;
};