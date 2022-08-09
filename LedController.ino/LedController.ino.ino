/*  
  Controller for RGB led tape
  Programmer: Natã A. R. de Souza
  Last update: 08/08/2022
*/

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
}

void loop() {
  Serial.println(digitalRead(4));
}
