#include <Servo.h>

Servo leftSuspension;
Servo rightSuspension;

const int tiltSensorPin = A0; 
int baseAngle = 90; 

void setup() {

  leftSuspension.attach(9);
  rightSuspension.attach(10);
  Serial.begin(9600);
}

void loop() {
  
  int tiltValue = analogRead(tiltSensorPin);
  int compensation = map(tiltValue, 0, 1023, -45, 45);
  int leftAngle = baseAngle + compensation;
  int rightAngle = baseAngle - compensation;
  leftSuspension.write(leftAngle);
  rightSuspension.write(rightAngle);
  Serial.print("Tilt Input: ");
  Serial.print(tiltValue);
  Serial.print("  -->  Left Arm: ");
  Serial.print(leftAngle);
  Serial.print(" deg, Right Arm: ");
  Serial.print(rightAngle);
  Serial.println(" deg");
  delay(20); 
}
