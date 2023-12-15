int myPhotoresistor = A0;
bool stateOfServo = false;

#include <Servo.h> // include Servo library

Servo myservo;  // create object to control a servo

int pos = 0;    // variable to store the servo position


void setup() {

Serial.begin(9600);
myservo.attach(9); 

}

void loop() {

  int lightValue = analogRead(myPhotoresistor); // assign sensor value to variable

if(lightValue<800) {

  if(stateOfServo==false){

for (pos = 0; pos <= 180; pos += 1) { // goes from 0-180 degrees
myservo.write(pos); 
delay(15);  
Serial.println(lightValue);


  }
  stateOfServo = true;
  }

   } else{

  if(stateOfServo==true){

for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15); // waits }
  Serial.println(lightValue);

 }
  stateOfServo = false;
  }
  }
  }