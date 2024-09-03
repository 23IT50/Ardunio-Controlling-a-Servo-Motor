//Arduino microcontroller to control a servo motor
#include <Servo.h>  // Include the Servo library

Servo myServo;  // Create a Servo object to control the servo
//This object will be used to control a specific servo motor. 

int servoPin = 9;  // Define the pin to which the servo is connected
//the servo motor is connected to pin 9 of the Arduino board.
void setup() {
  myServo.attach(servoPin);  // Attach the servo to the specified pin
}

void loop() {
  // Move the servo to 0 degrees
  myServo.write(0);
  delay(1000);  // Wait for 1 second

  // Move the servo to 90 degrees
  myServo.write(90);
  delay(1000);  // Wait for 1 second

  // Move the servo to 180 degrees
  myServo.write(180);
  delay(1000);  // Wait for 1 second
  myServo.write(60);
  delay(1000);  // Wait for 1 second
}
