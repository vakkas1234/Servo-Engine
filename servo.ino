#include <ESP32Servo.h>



#define servopin D0;
Servo servo1;


void setup() {
  // put your setup code here, to run once:
servo1.attach(servopin);
}

void loop() {
  // put your main code here, to run repeatedly:


for (int a; a<=180;a=a+1){
  servo1.write(a);
  delay(15);
}
for(int b = 180; b>0; b=b-1){
  servo1.write(b);
  delay(15);
}
}
