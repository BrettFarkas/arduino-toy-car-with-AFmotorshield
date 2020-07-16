#include <ServoTimer1.h>

ServoTimer1 servo1;

#include <AFMotor.h>

AF_DCMotor motor(3, MOTOR12_64KHZ); // create motor #2, 64KHz pwm

void setup() {
 Serial.begin(9600);           // set up Serial library at 9600 bps
 Serial.println("Servo test!");
 
 servo1.attach(9);
 
 motor.setSpeed(255);     // set the speed to 200/255
 
}
void loop() {

 int right = 167;  //the servo turns the steering wheel, these are the degree values
 int left = 10;
 int center = 85;
 
 //10 = LEFT
 //85 = CENTER
 //167   = RIGHT

 servo1.write(right);
delay(500);

  motor.run(BACKWARD);     // the other way
delay(1000);

 motor.run(RELEASE);      // stopped
 delay(500);
 
 servo1.write(left);
 delay(500);
 
  motor.run(FORWARD);      // turn it on going forward
 delay(1000);
 
motor.run(RELEASE);      // stopped
 delay(500);
/*
servo1.write(85);
 delay(1000);
servo1.write(10);
 delay(1000);
 servo1.write(85);
 delay(1000);
 */






delay(10);


}
