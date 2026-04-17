# Lesson 10 Notes

For this lesson, I created a program that changes the brightness of an LED using PWM on pin 11.

I started by assigning:

- pin 11 as the output pin
- 100 ms as the delay time between brightness changes
- a `brightness` variable starting at 0
- a `countMessage` string to label the brightness values in the Serial Monitor

In `setup()`, I set pin 11 as an output and started serial communication at 9600 so I could monitor the brightness values while the program ran.

In `loop()`, the code:

- increases the brightness in steps of 25
- prints each updated brightness value to the Serial Monitor
- writes each brightness level to the LED using `analogWrite()`
- waits 100 milliseconds between each change
- then decreases the brightness in steps of 25
- repeats the same process to dim the LED back down

This helped me see how PWM can be used not just to turn an LED on or off, but to gradually brighten and dim it by changing the duty cycle. It also showed me how the Serial Monitor can be used to track brightness values as the program runs.

