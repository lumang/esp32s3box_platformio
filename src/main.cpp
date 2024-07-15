#include <Arduino.h>
#include "app_hal.h"
#include <WiFi.h>


void setup()
{


    Serial.println("I am ESP32_Display_Panel");

    hal_setup();

    Serial.println("Setup done 1");
}

void loop()
{
    //sleep(1);
    hal_loop();
}