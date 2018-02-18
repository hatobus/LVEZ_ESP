#include <LVEZ_ESP.h>

#define anPin 25
#define pwPin 19

LVEZ_ESP32 ESP32_analog(anPin); 
LVEZ_ESP32 ESP32_pulse(pwPin);

void setup(){
    Serial.begin(9600);
}

void loop(){
    long analog_mm, analog_inch;
    long pulse_mm, pulse_inch;

    analog_mm = ESP32_analog.analog_dist_mm();
    analog_inch = ESP32_analog.analog_dist_inch();

    pulse_mm = ESP32_pulse.pulse_dist_mm();
    pulse_inch = ESP32_pulse.pulse_dist_inch();

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
