/*
* Name: Thema 3 Gruppenrep. für LB 121
* Autor: Lukas Bauer
* Datum: 14.12.2015
*/

int ledPIN = 3;
int ldrPIN = A0;
int ldrValue = 0;
int motorPIN = 7;

void setup() 
{
  pinMode(ldrPIN, INPUT);
  pinMode(ledPIN, OUTPUT);
  pinMode(motorPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  ldrValue = analogRead(ldrPIN); 
  Serial.println(ldrValue);
  
  if (ldrValue <= 282)
  {
    digitalWrite(ledPIN, HIGH);
    digitalWrite(motorPIN, LOW);
  }
  else {
  	 digitalWrite(ledPIN, LOW);
     digitalWrite(motorPIN, HIGH);
  }
}
