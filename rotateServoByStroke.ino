#include <Servo.h>
#include <math.h>

Servo testbenchServo; //Define an object 

int radius = 24; // mm - Define the stroke from the servo between 0° and 180°

double getAngle(double height){ //mm -> deg
  double ratio = height/radius;
  double angle = acos(ratio) * 180 / M_PI;
  return angle;
}

void setup() {  
  testbenchServo.attach(9);
}

void loop() {    
  for(int i = 0; i < 10; i ++){
    testbenchServo.write(getAngle(4)); Rotate to 4mm height
    delay(100);    
    testbenchServo.write(getAngle(6)); Rotate to 6mm height
    delay(100);         
  }

}
