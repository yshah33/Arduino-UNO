# Light Sensor and LED Control with Buzzer

## Overview

This Arduino project uses a photoresistor to control the illumination of LEDs and the pitch of a buzzer. As the light intensity detected by the photoresistor changes, the number of LEDs that light up will vary, and the buzzer's tone will adjust based on a potentiometer.

## Components

- **Photoresistor (Light Sensor)**: Measures light intensity.
- **Potentiometer**: Adjusts the buzzer's pitch.
- **LEDs**: Four LEDs that light up based on light intensity.
- **Buzzer**: Emits sound with variable pitch.
- **Arduino**: Microcontroller for controlling the components.

## Wiring

- **Photoresistor**: Connected to analog pin A0.
- **Potentiometer**: Connected to analog pin A2.
- **LED1**: Connected to digital pin 13.
- **LED2**: Connected to digital pin 12.
- **LED3**: Connected to digital pin 8.
- **LED4**: Connected to digital pin 2.
- **Buzzer**: Connected to digital pin 7.

## Code

The Arduino code reads values from the photoresistor and potentiometer to control the LEDs and buzzer:

- **LEDs**: 
  - **45 or higher**: All LEDs off.
  - **30 to 44**: LED1 on.
  - **20 to 29**: LED1 and LED2 on.
  - **10 to 19**: LED1, LED2, and LED3 on.
  - **5 to 9**: All LEDs on.

- **Buzzer**: 
  - The frequency is adjusted based on the potentiometer value, ranging from 200 Hz to 2000 Hz.

