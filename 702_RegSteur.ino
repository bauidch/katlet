/*
* Name: 702_ RegSteur
* Autor: Lukas Bauer
* Datum: 07.12.2015
*/

int ledPIN = 3;
int schalter1 = 7;
int schalter2 = 12;

void setup() 
{
  pinMode(ledPIN, OUTPUT);
  pinMode(schalter1, INPUT);
  pinMode(schalter1, INPUT);
  digitalWrite(schalter1,HIGH);
  digitalWrite(schalter2,HIGH);
  Serial.begin(9600);
}

void loop() 
{
	bool st1 = digitalRead(schalter1);
    bool st2 = digitalRead(schalter2);
  
  if((st1 == LOW) && (st2 == LOW))
  {
    digitalWrite(ledPIN,HIGH);
    Serial.println("Beide Schalter gerueckt");
  }
  else if((st1 == HIGH) && (st2 == HIGH)) {
      digitalWrite(ledPIN,LOW);
      Serial.println("Beide Schalter nicht gedrueckt");
  }
  else if((st1 == LOW) && (st2 == HIGH)) {
      Serial.println("Schalter 1 ist gedrueckt");
  }
  else if((st1 == HIGH) && (st2 == LOW)) {
      Serial.println("Schalter 2 ist gedrueckt");
  }
  else 
  {
    Serial.println("Etwas anders");
  }
}
