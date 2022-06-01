#include <Arduino.h>

 #define PIN 16


void setup() {
  // put your setup code here, to run once:
pinMode(PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN, HIGH);
  Serial.println("ON");
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(PIN, LOW);
  Serial.println("OFF");
  delay(1000);
}