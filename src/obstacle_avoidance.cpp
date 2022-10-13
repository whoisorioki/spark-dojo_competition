#include <arduino>

int ECHO_PIN = 3;
int TRIG_PIN = 4;
int LED_LIGHT = 5;

long duration;
int distance;

void setup() {
    pinMode(ECHO_PIN, INPUT);
    pinMode(TRIG_PIN, OUTPUT);
    Serial.begin(9600);
    Serial.println("Ultrasonic Sensor HC-SR04 Test");
    Serial.println("with Arduino Mega!");
}

void loop() {
    digitalWrite(TRIG_PIN, LOW);
    delay(2);
    digitalWrite(TRIG_PIN, HIGH);
    delay(10);
    digitalWrite(TRIG_PIN, LOW);
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    if (duration != 0) {
        digitalWrite(LED_LIGHT, HIGH);
    } else {
        digitalWrite(LED_LIGHT, LOW);
    }
}