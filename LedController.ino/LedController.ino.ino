/*  
  Controller for RGB led tape
  Programmer: Natã A. R. de Souza
  Last update: 08/08/2022
*/

#include <IRremote.h>

int RECV_PIN = 4;
IRrecv irrecv(RECV_PIN);

decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn(); 
}
  
void loop() {
if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}