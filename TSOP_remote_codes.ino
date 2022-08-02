#include <IRremote.h>

const int RECV_PIN = 12;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
        //Serial.println(results.value, HEX);  //for hexadecimal values use this line
        Serial.println(results.value);         //for decimal values use this line
        irrecv.resume();
  }
}
