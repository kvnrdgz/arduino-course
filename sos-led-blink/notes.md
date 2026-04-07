\# Notes



Built my first external LED circuit on the Arduino Uno R4 WiFi using pin 13, a red LED, a 1kΩ current-limiting resistor, and a breadboard. The long leg of the LED connects toward pin 13, and the short leg connects toward the resistor and then ground.



A big lesson here was resistor safety on the Uno R4. Since the board’s digital pins were treated as having an 8 mA current limit in the lesson, the safe resistor calculation came out to 625Ω minimum, so the correct kit choice was to round up to 1kΩ instead of down to 330Ω. The supplemental lesson emphasized designing for safety rather than trying to squeeze out maximum brightness.



I also learned how the breadboard works: components connect by column in the center section, the trench breaks continuity across the middle, and the power rails are separate connected rows. That made it easier to translate the circuit diagram into the physical build.



On the programming side, this lesson reinforced using pinMode() in setup() and digitalWrite() plus delay() in loop(). The final program blinked an external LED in an SOS Morse code pattern: 3 short blinks, 3 long blinks, 3 short blinks.



The other major takeaway was debugging. Most of the errors shown were simple ones: typos, wrong capitalization, missing semicolons, wrong port, wrong board selection, or forgetting to plug the board in. Good reminder that when Arduino code fails, the problem is often a small mistake rather than broken hardware.



\## What I learned

\- How to wire an external LED circuit using pin 13 and GND

\- The long leg of the LED goes toward the positive side

\- A 1kΩ resistor is the safe choice for limiting current on the Uno R4 in this lesson

\- How the breadboard connects by columns in the center section

\- How to blink an LED in an SOS Morse code pattern

\- How to troubleshoot common Arduino mistakes like typos, wrong case, missing semicolons, wrong port, or the board not being plugged in



\## Program behavior

This sketch blinks an external LED in an SOS pattern:

\- 3 short blinks

\- 3 long blinks

\- 3 short blinks

