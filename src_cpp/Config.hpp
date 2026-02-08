#pragma once
#include "../driver_cpp/EEPROM.hpp"

class Config
{
public:
    explicit Config(EEPROM& eeprom);

    void init();
    HwRev hwRevision() const;

private:
    EEPROM& eeprom_;
    HwRev hwRev_;
};