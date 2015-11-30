int buttonPin = 2; 
int ledPin = 13; 
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
	pushSerial();
} 

void pushSerial()
{
	buttonStatus = digitalRead(buttonPin); 
	if (LOW == buttonStatus) { 
		digitalWrite(ledPin, HIGH);
      	Serial.println("Value: 0");
	} 
  	else { 
		digitalWrite(ledPin, LOW); 
      	Serial.println("Value: 1");
    }
}
