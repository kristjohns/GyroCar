
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>
int count = 0;
int i;
const int stepsPerRevolution = 512;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper1(stepsPerRevolution, 8, 10, 9, 11);
Stepper myStepper2(stepsPerRevolution, 4, 6, 5, 7);
void setup() {
  // set the speed at 60 rpm:
  myStepper1.setSpeed(60);
  myStepper2.setSpeed(60);
  
  // initialize the serial port:
  //Serial.begin(9600);
}
void loop() {
  if (count < 1) {
    //myStepper1.step(-512*2/1.6);
    delay(1000);
  }

  for (i=2; i<31; i = i + 2) {
  if (count == 512*i/2) {
    //delay(1000);
}
}
  
  
  // step one revolution  in one direction:
  myStepper1.step(-1);

  // step one revolution in the other direction:
  myStepper2.step(-1);
exit(1);
  count++;
}

