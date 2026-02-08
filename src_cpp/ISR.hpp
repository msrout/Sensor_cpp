#pragma once
#include <cstdint>

class ISR
{
public:
    static void timerISR();

    static inline uint16_t adcRaw = 0;
    static inline bool sampleReady = false;
};