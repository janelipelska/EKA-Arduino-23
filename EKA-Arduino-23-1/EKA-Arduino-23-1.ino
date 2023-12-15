
int myPhotoresistor = A0; // include photoresistor

#include <Servo.h> // include Servo library

Servo myservo;  // create servo object to control a servo

void setup() {

  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

}

void loop() {
  
  int lightValue = analogRead(myPhotoresistor); // assign sensor value to variable

 if(lightValue<500) {
  myservo.write(180);
  }



}

