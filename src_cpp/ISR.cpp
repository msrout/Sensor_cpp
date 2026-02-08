#include "ISR.hpp"
#include "../driver_cpp/ADC.hpp"

extern ADC g_adc;

void ISR::timerISR()
{
    adcRaw = g_adc.read();
    sampleReady = true;
}