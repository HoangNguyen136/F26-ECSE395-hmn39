// Minh Hoang Nguyen_hmn39_ECSE 395 Lab #3: Learning ESP32 and Sensors

#include <Arduino.h>

//Put your potentiometer pin assignment here
#define POTENTIOMETER_PIN A0
const int sensorPin = POTENTIOMETER_PIN; // Assign the potentiometer pin to a variable

void setup() {
  Serial.begin(115200);
}

void loop() {
  //This line should print out the values from the sensor by Serial.println(??);
  int sensorValue = analogRead(sensorPin);

  Serial.println(sensorValue);
  delay(50); 
}