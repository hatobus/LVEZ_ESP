cmake_minimum_required(VERSION 3.9)
project(LVEZ1_ESP)

set(CMAKE_CXX_STANDARD 11)

add_executable(LVEZ1_ESP
        lib/readme.txt
        pic/Arduino_LVEZ.png
        pic/Arduino_PWMLVEZ.png
        pic/ESP32_LVEZ.png
        pic/ESP32_PWMLVEZ.png
        pic/ESP8266_pwm.png
        pic/ESP8266connect.jpg
        pic/to1V.jpg
        platformio.ini
        README.md LVEZ_ESP.h LVEZ_ESP.cpp)
