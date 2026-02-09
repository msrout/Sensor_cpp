#pragma once
#include <cstdint>
#include "../driver_cpp/EEPROM.hpp"

enum class TempState { OK, WARN, CRIT };

class Temperature
{
public:
    Temperature(HwRev rev) : hwRev_(rev) {}
    int16_t convert(uint16_t raw) const;
    TempState evaluate(int16_t tempX10) const;

private:
    HwRev hwRev_;
};