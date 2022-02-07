#include <MotorDriver.h>
// This is the library (specific commands that help) that you need to use to power the motors.


MotorDriver m;
// This is an initialization command. Leave it be.


void setup()
{

  pinMode(A0, INPUT); //this sets up which pin we are using so that we can read voltages through it
  digitalWrite(A0, HIGH); //this sends a voltage through the pin


  //this is the constant loop that prevents the code below from being activated
  //until the wire is removed
  while (digitalRead(A0) == LOW) {
    delay(50);
  }

  m.motor(1,BRAKE,180);
  m.motor(2,BRAKE,120);
  delay(3000);

  m.motor(1,BACKWARD,255);
  m.motor(2,BACKWARD,255);
  delay(12000);
  
  m.motor(1,BRAKE,180);
  m.motor(2,BRAKE,120);
  delay(9999000);


}


void loop() {}
