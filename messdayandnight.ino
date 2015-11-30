/*
* Name: Messstation Tag und Nacht
* Autor: Lukas Bauer
* Datum: 30.11.15
*/
int buttonPin = 2; 
int ledPin = 13; 
int sensorValue = 0;
int buttonStatus = LOW;

void setup() 
{
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT); 
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

void loop() 
{
  sensorValue = analogRead(A0);
  analogWrite(3, sensorValue/4);
  
  buttonStatus = digitalRead(buttonPin); 
  if (LOW == buttonStatus) { 
      if (sensorValue == 12) {
        digitalWrite(ledPin, HIGH);
      }
      else {
        Serial.println("Es ist zu hell");
      	digitalWrite(ledPin, LOW);
      }
  }
   else { 
      Serial.print("Lightness: ");
      Serial.println(sensorValue);
   }
