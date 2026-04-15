\# Lesson 10 Notes



For this lesson, I created a program that gradually increases the brightness of an LED using PWM on pin 11.



I started by assigning:

\- pin 11 as the output pin

\- 500 ms as the delay time between changes

\- a `brightness` variable starting at 1



In `setup()`, I set pin 11 as an output and started serial communication at 9600 so I could monitor the brightness values in the Serial Monitor.



In `loop()`, the code:

\- writes the current brightness level to the LED using `analogWrite()`

\- waits 500 milliseconds

\- increases the brightness by 1

\- prints the updated brightness value to the Serial Monitor



This helped me see how PWM can be used to control LED brightness and how the Serial Monitor can be used to track changes in the program while it runs.

