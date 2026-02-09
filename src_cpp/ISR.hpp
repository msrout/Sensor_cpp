#pragma once
#include <cstdint>
#include <stdbool.h>

class ISR
{
public:
    static void timerISR();

    static volatile uint16_t adcRaw;
    static volatile bool sampleReady;
};