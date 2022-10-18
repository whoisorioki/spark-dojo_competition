#include <Arduino.h>

#define RIGHT_SENSOR 4
#define LEFT_SENSOR 6
#define LED_LIGHT1 8
#define LED_LIGHT2 9

void setup() {
    pinMode(RIGHT_SENSOR, INPUT);
    pinMode(LEFT_SENSOR, INPUT);
    pinMode(LED_LIGHT1, OUTPUT);
    pinMode(LED_LIGHT2, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int rightIRSensorValue = digitalRead(RIGHT_SENSOR);
    int leftIRSensorValue = digitalRead(LEFT_SENSOR);

    if (rightIRSensorValue == LOW && leftIRSensorValue == LOW) {
        digitalWrite(LED_LIGHT1, HIGH);
        digitalWrite(LED_LIGHT2, HIGH);
    }
    else if (rightIRSensorValue == HIGH && leftIRSensorValue == LOW) {
        digitalWrite(LED_LIGHT1, HIGH);
        digitalWrite(LED_LIGHT2, LOW);
    }
    else if (rightIRSensorValue == LOW && leftIRSensorValue == HIGH) {
        digitalWrite(LED_LIGHT1, LOW);
        digitalWrite(LED_LIGHT2, HIGH);
    }
    else {
        digitalWrite(LED_LIGHT1, LOW);
        digitalWrite(LED_LIGHT2, LOW);
    }
}