//
// Created by fhaga on 18/02/13.
//

#ifndef LVEZ1_ESP_LVEZ_ESP_H
#define LVEZ1_ESP_LVEZ_ESP_H

#endif //LVEZ1_ESP_LVEZ_ESP_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <string>

using namespace std;

class LVEZ_ESP8266{
public:
    LVEZ_8266(); // using analog read
    LVEZ_8266(int pin_number); // using pulse width

    long analog_dist_mm();
    long analog_dist_inch();

    double pulse_dist_mm();
    double pulse_dist_inch();


private:
    string pin_num_analog;
    int pin_num_digital;
};

class LVEZ_ESP32{};

class LVEZ_Arduino{};
