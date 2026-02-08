#include "Config.hpp"

Config::Config(EEPROM& eeprom)
    : eeprom_(eeprom), hwRev_(HwRev::A)
{
}

void Config::init()
{
    hwRev_ = eeprom_.readHwRevision();
}

HwRev Config::hwRevision() const
{
    return hwRev_;
}