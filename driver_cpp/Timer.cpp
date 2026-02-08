#include "Timer.hpp"
#include "../src_cpp/ISR.hpp"

void Timer::init() {}

void Timer::tick()
{
    ISR::timerISR();
}