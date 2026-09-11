#include <Arduino.h>

// function prototype
int voltage(float analogvalue);

// Put your potentiometer pin assignment here
const int sensorPin = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // This is the line for printing in the serial

    //HMN39 3650294 - This line initialize new integer called sensorValue and read sensorPin analog output
    int sensorValue = analogRead(sensorPin);

    //HMN39 3650924 - This line initialize new float called sensorVoltage and calculate the voltage using the formula (Analog value * Reference voltage) / (Max sensor value)
    float sensorVoltage = (sensorValue * 3.3) / 4095.0;

    Serial.println(sensorVoltage);

    //HMN39 3650924 - This line adds a delay to the program of 50 ms
    delay(50); 
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
}