#include <unistd.h>

#include "../driver_cpp/ADC.hpp"
#include "../driver_cpp/Timer.hpp"
#include "../driver_cpp/I2C.hpp"
#include "../driver_cpp/EEPROM.hpp"
#include "System.hpp"
#include "Config.hpp"
#include "Temperature.hpp"
#include "LEDs.hpp"
#include "App.hpp"

ADC g_adc;

int main()
{
    I2C i2c;
    EEPROM eeprom(i2c);
    Timer timer;
    LEDs leds;

    System system(g_adc, timer, i2c, eeprom);
    system.init();

    Config config(eeprom);
    config.init();

    Temperature temperature(config.hwRevision());
    App app(temperature, leds);

    app.init();

    while (true)
    {
        timer.tick();   // simulate 100 µs ISR
        app.task();
        usleep(100);
    }
}