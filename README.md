# LVEZ_ESP

This is Maxbotix LV-EZ series's repository.

LV-EZ series is very accurate sonic wave distance sensor.

dataseat is [here](https://www.maxbotix.com/downloads.htm)

To measure distance using LV-EZ series, two method.

First, to read analog value with **TOUT** pin.

but this method is a complecated with connect.

## Using ESP 8266 series

ESP8266's analog input volume is **0~1V's** and 10 bits (0~1023). We need to transfer 3.3V to 1.0V. 

like this.

![3.3to1v](https://i.imgur.com/Tsei3NJ.jpg)

you have to connect like this circle.

If you connect directly, ESP8266 will brake.
