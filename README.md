# LVEZ_ESP

This is Maxbotix LV-EZ series's repository.

LV-EZ series is very accurate sonic wave distance sensor.

dataseat is [here](https://www.maxbotix.com/downloads.htm)

To measure distance using LV-EZ series, two method.

First, to read analog value with **TOUT** pin.

but this method is a complecated with connect.

## Analog Read

### Using ESP 8266 series

ESP8266's analog input volume is **0~1V's** and 10 bits (0~1023). We need to transfer 3.3V to 1.0V. 

like this.

![3.3to1v](https://i.imgur.com/Tsei3NJ.jpg)

you have to connect like this circle.

If you connect directly, ESP8266 will brake.

![](https://i.imgur.com/x7gP9yv.jpg)


### Using ESP 32 series
ESP32's analog input volume is 0~3.3V. Enable to directly connect. 
But, ESP32's resolution is 12 bit.

So, to mapping value 12bit to 10bit(0~4096 to 0~1023).

```map.cpp
long map(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
```

like this(exsample code with transfer)

```mapping.cpp
double val;
val = analogRead(analogpin);

distance = map(val, 0, 4096, 0, 1024);

dist_mm = distance * 5;

Serial.println(dist_mm + "mm");
```

this code is transfer 12bit to 10bit.

### Using Arduino
Arduino is very easy to use this one.

First, You attach Arduino's Analog pin(A0 ~ A4)

