# ECSE 395: Junior Engineering Design Seminar Lab

*Minh Hoang Nguyen - hmn39 - Lab 3: ESP32 and Sensors - 11th September, 2026*

# Lab 3: ESP32 and Sensors
## *Overview*

**Course:** ECSE 395 — Junior Engineering Design Seminar

**Date:** September 11th, 2026

**Instructor:** Professor Michael Fu

## *Lab 3 Assignment purpose*

The purpose of Lab 3 is to learn how to use an ESP32 board to acquire and respond to signals from different sensors.

By completing this lab, I will be able to:

- Use an ESP32 to read analog signals from sensors
- Connect and use a potentiometer with an ESP32
- Convert an analog sensor reading into a corresponding voltage value
- Use a touch sensor to detect physical contact
- Control the ESP32's built-in LED based on sensor input
- Upload and test C++ programs on the ESP32 using PlatformIO
- Observed sensor outputs using the Serial Monitor

## *Steps Completed to Finish This Lab*
1. Set up the Lab 3 folder in my ECSE 395 GitHub repository.
2. Created the `playing_with_sensors.md` file in the folder.
3. Opened the Lab 3 project from Lab 1 file on VSCode through PlatformIO.
4. Connected the ESP32 to computer using a USB-C data cable.
5. Connected the potentiometer to the ESP32 using a breadboard and jumper wires.
6. Changed the file `values.cpp` file to `potentiometer.cpp`.
7. Commented out the other .cpp files other than the one above.
8. Uploaded `potentiometer.cpp` to the ESP32 and used the Serial Monitor to observe the result for the sensorValue
9. Changed the code on `voltage.cpp` to save the sensor value, convert it into voltage using the prodvided equation.
10. Printed the voltage to the Serial Monitor.
11. Tested the potentiometer again to observe the changing voltage value.
12. Connected the touch sensor to the ESP32 using the breadboard and jumper wires.
13. Created a program named `touch.cpp` for the sensor.
14. Tested the touch sensor by making contact and observing result on the Serial Monitor.
15. Changed `touch.cpp` to define the ESP32's built-in LED as output.
16. Added an if and else statement so that the built-in LED turns on when touching the sensor and off when stop touching it.
17. Tested the touch sensor again and observed the result on ESP32
18. Uploaded all of the code and pushed to GitHub repository.

## *Coding File Names*

The coding files for this lab are in the /Lab_3/.src folder:

`main.cpp`
`potentiometer.cpp` — reads the analog value produced by the potentiometer.
`voltage.cpp` — converts the potentiometer's analog reading into a voltage and displays the result through the Serial Monitor.
`touch.cpp` — detects contact with the touch sensor and controls the ESP32's built-in LED.

## *Time Reporting and Reflection*
1. Both time for the testing of the potentiometer and the touch sensor took me about 90 minutes to complete it all
2. I would associate this assignment with low difficulty (albeit with some difficulties with the serial monitor)
3. (I associated the assignment with low difficulty earlier)
4. As of current, I'm feeling comfortable with the contents.
5. (I don't have any additional feedback for the instructors and the teaching assistant.
