#include "LEDs.hpp"
#include <iostream>

void LEDs::init()
{
    std::cout << "LEDs initialized\n";
}

void LEDs::set(TempState state)
{
    switch (state)
    {
        case TempState::OK:   std::cout << "LED: GREEN\n"; break;
        case TempState::WARN: std::cout << "LED: YELLOW\n"; break;
        case TempState::CRIT: std::cout << "LED: RED\n"; break;
    }
}