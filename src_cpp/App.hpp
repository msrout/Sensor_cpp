#pragma once
#include "Temperature.hpp"
#include "LEDs.hpp"

class App
{
public:
    App(Temperature& temp, LEDs& leds);
    void init();
    void task();

private:
    Temperature& temp_;
    LEDs& leds_;
};
