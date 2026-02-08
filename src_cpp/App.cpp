#include "App.hpp"
#include "ISR.hpp"

App::App(Temperature& t, LEDs& l)
    : temp_(t), leds_(l) {}

void App::init()
{
    leds_.init();
}

void App::task()
{
    if (ISR::sampleReady)
    {
        ISR::sampleReady = false;
        int16_t t = temp_.convert(ISR::adcRaw);
        leds_.set(temp_.evaluate(t));
    }
}