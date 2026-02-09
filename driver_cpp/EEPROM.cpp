#include "EEPROM.hpp"

HwRev EEPROM::readHwRevision()
{
    return i2c_.read(0x0000) ? HwRev::B : HwRev::A;
}