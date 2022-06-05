#include <Arduino.h>

uint8_t a = 0;

void setup() {
  pinMode( 9 , OUTPUT);
  pinMode( 10 , OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9,a);
  analogWrite(10,255-a);
  a++;
  if (a == 255)
  {
    a = 0;
    /* code */
  }
  Serial.println(a);
  delay(100);
}