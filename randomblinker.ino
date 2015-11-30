/*
*  Random Blinker
*  Autor: Lukas Bauer
*/

int sensorValue = 0;

void setup() {

  pinMode(3, OUTPUT); 
  Serial.begin(9600);

}

void loop() {
  // Generate a Random Number for the LED
  //sensorValue = random(1000);
  sensorValue = analogRead(A0);//random(1000);//
  analogWrite(3, sensorValue/4);
  Serial.println(sensorValue, DEC);
  //delay(500);
  
}
