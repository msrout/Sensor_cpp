#include "ADC.hpp"

void ADC::init() {}

uint16_t ADC::read()
{
    value_ += 5;
    if (value_ > 1100)
        value_ = 300;
    return value_;
}