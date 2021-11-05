#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<255;i++){
    analogWrite(13,i);
    delay(100);
  }
}
