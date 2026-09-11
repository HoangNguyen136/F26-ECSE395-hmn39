#include <Arduino.h>

// HMN39 3650294 - Defining the built-in LED on the ESP32
#define ledPin LED_BUILTIN
int sensorPin = A0;

void setup() {
  Serial.begin(115200);

  // Set touch sensor pin as an input for ESP32 to read its signal.
  pinMode(sensorPin, INPUT);

  // HMN39 3650294 - Set the built-in LED pin as an output so the ESP32 can control the LED.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from the touch sensor.
  int sensorValue = analogRead(sensorPin);

  // Change this threshold if necessary based on your sensor readings.
  if (sensorValue > 500) {
    Serial.println("Touch detected!");

    // HMN39 3650294 - This line makes the built-in LED turn on when contact with the touch sensor is detected.
    digitalWrite(ledPin, HIGH);
  }
  else {
    Serial.println("No touch detected...");

    // HMN39 3650294 - Turn the built-in LED off when contact with the touch sensor is broken.
    digitalWrite(ledPin, LOW);
  }
  //This line adds a delay to the program of 50 ms
  delay(50);
}
