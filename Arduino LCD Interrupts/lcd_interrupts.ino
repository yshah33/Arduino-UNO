#include <LiquidCrystal.h>				// Include the LiquidCrystal library

// Declare and initialize gloabal variables
LiquidCrystal lcd(12, 11, 9, 8, 7, 6);  // Initialize the LCD
int pin1 = 2;
int pin2 = 3;
int state = 0;
int val = 0;
unsigned long startTime;

// Setup function
void setup() 
{
  lcd.begin(16, 2);                    // Set 16x2 display
  // Set pin1 as input, and pin2 as pull-up resistor
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT_PULLUP);
  // Attach an interrupt to pin1 (2), and pin2(3)
  attachInterrupt(digitalPinToInterrupt(pin1), button1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(pin2), button2, CHANGE);
}


// Interrupt for button 1, set state to 1
void button1 () 
{
  state = 1;
}


// Interrupt for button 2, set state to 0 and reset startTime
void button2() 
{
  startTime = millis();
  state = 0;
}

void loop() 
{
  lcd.clear();						// clear the lcd
  
  // if state is 0, then using LCD, display the message, "System has been 
  // running for X seconds," where X will be second and it will update with
  // time by using millies.
  if (state == 0) {					
    lcd.setCursor(1, 0);
    lcd.print("System has been");
    lcd.setCursor(1, 1);
    lcd.print("running for ");
    unsigned long currTime = millis();				// Get the current time
    unsigned long displayTime = (currTime-startTime)/1000;	// update the seconds
    lcd.print(displayTime);							// display second to LCD	
    lcd.print(" seconds");
  } 
  // if state is 1, then using LCD, display a message "Interrupt received! 
  // Press button 2 to continue.". It will remain this until button 2 is pressed.
  else if (state == 1) {
    lcd.setCursor(1, 0);
    lcd.print("Interrupt received!");
    lcd.setCursor(1, 1);
    lcd.print("Press button 2 to continue");
  }		
  delay(200);
}
