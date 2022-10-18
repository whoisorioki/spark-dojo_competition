#include <Arduino.h>

#define IRSensor 5
#define LED_LIGHT 6

void setup() {
    pinMode(IRSensor, INPUT);
    pinMode(LED_LIGHT, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int irValue = digitalRead(irValue);

    if (irValue == LOW) 
    {
        digitalWrite(LED_LIGHT, HIGH);
        delay(10);
    }
    else 
    {
        digitalWrite(LED_LIGHT, LOW);
        delay(10);
    }
}