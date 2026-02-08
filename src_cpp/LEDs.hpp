#pragma once
#include "Temperature.hpp"

class LEDs
{
public:
    void init();
    void set(TempState state);
};