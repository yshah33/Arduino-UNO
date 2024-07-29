# Arduino LCD Interrupts

## Description

This Arduino project demonstrates the use of interrupts with two push buttons and a 16x2 LCD display. The project features two states:

- **State 0**: The LCD displays "System has been running for X seconds," where X is the elapsed time since the last state transition. The time is updated in seconds using `millis()`.
- **State 1**: When Button 1 is pressed, the LCD displays "Interrupt received! Press button 2 to continue." The system remains in this state until Button 2 is pressed.

Upon pressing Button 2, the system transitions back to State 0, resets the time counter, and updates the display accordingly.

## Components

- Arduino board (e.g., Uno)
- 16x2 LCD display
- Two push buttons
- Connecting wires
- Breadboard (optional)

## Wiring

- **LCD Connections:**
  - RS: Pin 12
  - E: Pin 11
  - D4: Pin 9
  - D5: Pin 8
  - D6: Pin 7
  - D7: Pin 6

- **Button Connections:**
  - Button 1: Pin 2
  - Button 2: Pin 3
