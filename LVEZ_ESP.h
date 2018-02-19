//
// Created by Hatobus on 18/02/13.
//

/*
The MIT License (MIT)

Copyright (c) 2015 bpyamasinn.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/


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
