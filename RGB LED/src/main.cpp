#include <Arduino.h>

int r = 9;
int g = 10;
 int b = 11;
void setup(){  
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(2000);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(r, HIGH);

}

void loop(){

}