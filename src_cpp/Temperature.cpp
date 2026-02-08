#include "Temperature.hpp"

int16_t Temperature::convert(uint16_t raw) const
{
    return (hwRev_ == HwRev::A) ? raw * 10 : raw;
}

TempState Temperature::evaluate(int16_t t) const
{
    if (t >= 1050 || t < 50) return TempState::CRIT;
    if (t >= 850)           return TempState::WARN;
    return TempState::OK;
}