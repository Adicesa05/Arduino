// 2 Button controlled servo
// By Andrew


#include <Servo.h>   //Includes Servo

Servo myServo;
int btn1Pin = 4;    //Button1 -> Pin 4
int btn2Pin = 2;    //Button2 -> Pin 2
int servoPin = 9;   //Servo -> Pin 9
int btn1State = 0;  //State of button 1
int btn2State = 0;  //State of button 2
int pos = 0;        //Position of Servo

void setup() {  //Runs command 1 time
  Serial.begin(9600);         //beings serial (always use this)
  myServo.attach(servoPin);   //Activates servo
  pinMode (btn1Pin, INPUT);   //Button 1 Pin is the input for the servo
  pinMode (btn2Pin, INPUT);   //Button 2 Pin is the input for the servo
  pinMode (servoPin, OUTPUT); //ServoPin is the output
}

void loop() {  //Loops command forever
  btn1State = digitalRead(btn1Pin);  // State of button 1 is for button pin 1
  btn2State = digitalRead(btn2Pin);  // State of button 2 is for button pin 2

  if (btn1State == HIGH && pos >0) { // If button 1 is pressed -1 degree 
    pos=pos -=1;  
    myServo.write(pos);

    Serial.println(pos);
  }


  if (btn2State == HIGH && pos <180) {
    pos=pos +=1;
    myServo.write(pos);

    Serial.println(pos);
  }



}
