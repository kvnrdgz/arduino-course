# Lesson 12: Reading Analog Voltage

## Summary

This sketch reads an analog value from a potentiometer using `analogRead()` and prints both the raw reading and the converted voltage to the Serial Monitor.

The Arduino reads the analog input as a value from `0` to `1023`. The code converts that value into a voltage from `0V` to `5V`.

## Code Overview

```cpp
int potPin = A2;
```

Stores the analog input pin being used.

```cpp
int potVal;
```

Stores the raw value read from the potentiometer.

```cpp
float volts;
```

Stores the converted voltage value. This is a `float` because voltage can include decimals.

```cpp
potVal = analogRead(potPin);
```

Reads the analog value from pin `A2`. The value will be between `0` and `1023`.

```cpp
volts = (5. / 1023.) * potVal;
```

Converts the raw analog reading into voltage.

The decimal points in `5.` and `1023.` matter because they force floating-point math. Without them, Arduino would treat the numbers as integers and the voltage calculation would not work correctly.

```cpp
Serial.print("potVal: ");
Serial.print(potVal);
Serial.print("  Voltage: ");
Serial.println(volts);
```

Prints the raw analog value and the converted voltage to the Serial Monitor.

## What I Learned

- `analogRead()` reads values from `0` to `1023`.
- A reading of `0` represents `0V`.
- A reading of `1023` represents about `5V`.
- Use `float` when working with decimal values.
- Use decimal points in the voltage formula so Arduino performs floating-point math.
- `Serial.print()` keeps printing on the same line.
- `Serial.println()` prints and then moves to the next line.

## Final Formula

```cpp
volts = (5. / 1023.) * potVal;
```