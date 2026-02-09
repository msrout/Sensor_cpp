#include "ISR.hpp"
#include "../driver_cpp/ADC.hpp"

extern ADC g_adc;
volatile uint16_t ISR::adcRaw = 0;
volatile bool ISR::sampleReady = false;

void ISR::timerISR()
{
    adcRaw = g_adc.read();
    sampleReady = true;
}