//
// Created by fhaga on 18/02/13.
//

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "LVEZ_ESP.h"

#include <string>

using namespace std;

LVEZ_ESP8266::LVEZ_8266() {
    string pin_num_analog = "A0";
}

LVEZ_ESP8266::LVEZ_8266(int pin_number) {
    int pin_num_digital = pin_number;
    pinMode(pin_number, INPUT);
}

long LVEZ_ESP8266::get_raw_data_analog() {
    long raw_data = 0;
    raw_data = analogRead(pin_num_analog);
    raw_data = raw_data >> 2;
    return raw_data;
}

long LVEZ_ESP8266::analog_dist_mm() {
    long distance_mm = 0, raw_data = 0;
    raw_data = get_raw_data_analog();
    distance_mm = raw_data * 5;
    return distance_mm;
}

long LVEZ_ESP8266::analog_dist_inch() {
    long distance_inch = 0, raw_data = 0;
    raw_data = get_raw_data_analog();
    distance_inch = (raw_data * 5) / 25.4;
    return distance_inch;
}

double LVEZ_ESP8266::pulse_dist_mm() {
    double distance_mm = 0;
    distance_mm = pulseIn(pin_num_digital, HIGH);
    return distance_mm;
}

double LVEZ_ESP8266::pulse_dist_inch() {
    double distance_inch = 0;
    distance_inch = pulseIn(pin_num_digital, HIGH);
    distance_inch = distance_inch / 25.4;
    return distance_inch;
}


LVEZ_ESP32::LVEZ_32(int pin_number) {
    pin_num = pin_number;
}

long LVEZ_ESP32::analog_dist_mm() {
    long distance_mm = 0, raw_data = 0;
    raw_data = get_raw_data_analog();
    distance_mm = raw_data * 5;
    return distance_mm;
}

long LVEZ_ESP32::analog_dist_inch() {
    long distance_inch = 0, raw_data = 0;
    raw_data = get_raw_data_analog();
    distance_inch = (raw_data * 5) / 25.4;
    return distance_inch;
}

long LVEZ_ESP32::get_raw_data_analog() {
    long raw_data = 0;
    raw_data = analogRead(pin_num);
    raw_data = raw_data >> 2;
    return raw_data;
}

long LVEZ_ESP32::pulse_dist_mm() {
    double distance_mm = 0;
    distance_mm = pulseIn(pin_num_digital, HIGH);
    return distance_mm;
}

long LVEZ_ESP32::pulse_dist_inch() {
    return 0;
}
