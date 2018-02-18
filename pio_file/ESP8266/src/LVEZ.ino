#include <LVEZ_ESP.h>

#define pwPin 12

LVEZ_ESP8266 ESP8266_analog(); 
LVEZ_ESP8266 ESP8266_pulse(pwPin);

void setup(){
    Serial.begin(9600);
}

void loop(){
    long analog_mm, analog_inch;
    double pulse_mm, pulse_inch;

    analog_mm = ESP8266_analog.analog_dist_mm();
    analog_inch = ESP8266_analog.analog_dist_inch();

    pulse_mm = ESP8266_pulse.pulse_dist_mm();
    pulse_inch = ESP8266_pulse.pulse_dist_inch();

    delay(100);

    Serial.println("Measured by analog pin");
    
    Serial.print(analog_mm);
    Serial.println(" mm");

    Serial.print(analog_inch);
    Serial.println(" inch");

    Serial.println("Measured by pulse pin");
    
    Serial.print(pulse_mm);
    Serial.println(" mm");
    
    Serial.print(pulse_inch);
    Serial.println(" inch");

    delay(1000);
}
