#include <LVEZ_ESP.h>

#define anPin "A0"
#define pwPin 19

LVEZ_Arduino Arduino(pwPin);

void setup(){
    Serial.begin(9600);
}

void loop(){
    long analog_mm, analog_inch;
    double pulse_mm, pulse_inch;

    analog_mm = Arduino.analog_dist_mm(anPin);
    analog_inch = Arduino.analog_dist_inch(anPin);

    pulse_mm = Arduino.pulse_dist_mm();
    pulse_inch = Arduino.pulse_dist_inch();

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
