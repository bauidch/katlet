/*
* Name: Regelung Kühlhaus
* Autor: Lukas Bauer
* Datum: 07.12.2015
*/
int ldrPIN = A0;
int motorPIN = 9;
int ldrValue = 0;
int motorValue = 0;

void setup() 
{
  pinMode(ldrPIN, INPUT);
  pinMode(motorPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  ldrValue = analogRead(ldrPIN);  
  motorValue = map(ldrValue, 1011, 191, 0, 255);
  analogWrite(motorPIN, motorValue);  
  Serial.print("LDR: " );
  Serial.println(ldrValue);
  Serial.print("Ventilator: ");
  Serial.println(motorValue);
  delay(3);
}
