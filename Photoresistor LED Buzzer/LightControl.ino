int photoresistor = A0;
int potentiometer = A2;
int LED1 = 13;
int LED2 = 12;
int LED3 = 8;
int LED4 = 2;
int buzzer = 7;
int value = 0;
int value1 = 0;


void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(photoresistor, INPUT);
}


void loop() 
{
  value = analogRead(photoresistor);
  value1 = analogRead(potentiometer);
  // Serial.println(value);
  Serial.println(value1);
  
  if (value >= 45) {
    digitalWrite (LED1, LOW);
  	digitalWrite (LED2, LOW);
  	digitalWrite (LED3, LOW);
    digitalWrite (LED4, LOW);
  }
  else if (value >= 30) {
    digitalWrite (LED1, HIGH);
  	digitalWrite (LED2, LOW);
  	digitalWrite (LED3, LOW);
    digitalWrite (LED4, LOW);
  }
  else if (value >= 20) {
    digitalWrite (LED1, HIGH);
  	digitalWrite (LED2, HIGH);
  	digitalWrite (LED3, LOW);
    digitalWrite (LED4, LOW);
  }
  else if (value >= 10) {
    digitalWrite (LED1, HIGH);
  	digitalWrite (LED2, HIGH);
  	digitalWrite (LED3, HIGH);
    digitalWrite (LED4, LOW);
  }
  else if (value >= 5) {
    digitalWrite (LED1, HIGH);
  	digitalWrite (LED2, HIGH);
  	digitalWrite (LED3, HIGH);
    digitalWrite (LED4, HIGH);
  }

  tone(buzzer, map(value1, 0, 1023, 200, 2000));
  
  delay(200);
}
