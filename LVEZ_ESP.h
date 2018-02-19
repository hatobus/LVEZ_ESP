//
// Created by fhaga on 18/02/13.
//

#ifndef LVEZ1_ESP_LVEZ_ESP_H
#define LVEZ1_ESP_LVEZ_ESP_H

#endif //LVEZ1_ESP_LVEZ_ESP_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
//#include "WProgram.h"
#endif

#include <string>

using namespace std;

namespace LVEZ_8266 {
    class LVEZ_ESP8266 {
    public:
        LVEZ_ESP8266(); // using analog read
        LVEZ_ESP8266(short pin_number); // using pulse width

        long get_raw_data_analog();

        long analog_dist_mm();

        long analog_dist_inch();

        double pulse_dist_mm();

        double pulse_dist_inch();


    private:
        string pin_num_analog;
        short pin_num_digital;
    };
}

class LVEZ_ESP32{
public:
    LVEZ_ESP32(short pin_num);

    long get_raw_data_analog();

    long analog_dist_mm();
    long analog_dist_inch();

    double pulse_dist_mm();
    double pulse_dist_inch();

private:
    short pin_num;

};

class LVEZ_Arduino{
public:
    LVEZ_Arduino(short pin_number);

    long get_raw_data_analog(string analog_pin);
    long get_raw_data_pulse();

    long analog_dist_mm(string analog_pin);
    long analog_dist_inch(string analog_pin);

    double pulse_dist_mm();
    double pulse_dist_inch();

private:
    short pin_num;
};
