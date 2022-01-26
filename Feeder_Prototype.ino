#include <Servo.h>
#define Servopin_1 9
#define Servopin_2 6
#define IR1 2
#define IR2 4



Servo Servo1;
Servo Servo2;
int servoAngle = 0;



void setup() 
{
 Serial.begin(9600);
 Servo1.attach(Servopin_1);
 Servo2.attach(Servopin_1);
 pinMode (IR1, INPUT);
 pinMode (IR2, INPUT);
}

void loop() 
{
  if (digitalRead(IR1)== LOW){
    Servo1.write(180);
    Serial.print("Rotate 1");
    delay(500);
  Servo1.write(0);
  }
  
 else if (digitalRead(IR2)==LOW){
    Servo2.write(180);
    Serial.print("Rotate 2");
    delay(500); 
  Servo1.write(0);
  }
  
}
