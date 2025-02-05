#include "servo.h"
#include <stdio.h>
#include "pico/stdlib.h"

bool direction = true;
int currentMillis = 400;
int servoPin = 0;

int main()
{
    setServo(servoPin, currentMillis);
    while (true)
    {
        currentMillis += (direction)?5:-5;
        if (currentMillis >= 2100) direction = false;
        if (currentMillis <= 900) direction = true;
        setMillis(servoPin, currentMillis);
        sleep_ms(10);
    }
}