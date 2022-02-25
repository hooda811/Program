/*=============== Program Kontrol Motor ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/
// Program sudah disimulasikan di benda nyata dan bekerja dengan baik

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

#define servoPin 3 //~
#define servoPin1 5
#define servoPin2 11
#define servoPin3 9
#define servoPin4 10

#define pushButtonPin 1 
#define pushButtonPin1 A3
#define pushButtonPin2 A4
#define pushButtonPin3 A5
#define pushButtonPin4 A2
#define pushButtonPin5 12
#define pushButtonPin6 13
#define pushButtonPin7 A0
#define pushButtonPin8 0
#define pushButtonPin9 A1

int angle =90;    // initial angle  for servo
int angleStep =10;
int angle1 = 90;
int angle2 =90;
int angle3 =90;
int angle4 =90;

const int minAngle = 0;
const int maxAngle = 180;

void setup() {
  // Servo button demo by Robojax.com
  Serial.begin(9600);          //  setup serial
  myservo.attach(servoPin);  // attaches the servo on pin 3 to the servo object
  myservo1.attach(servoPin1);
  myservo2.attach(servoPin2);
  myservo3.attach(servoPin3);
  myservo4.attach(servoPin4);
  pinMode(pushButtonPin,INPUT_PULLUP);
  pinMode(pushButtonPin1,INPUT_PULLUP);
  pinMode(pushButtonPin2,INPUT_PULLUP);
  pinMode(pushButtonPin3,INPUT_PULLUP);
  pinMode(pushButtonPin4,INPUT_PULLUP);
  pinMode(pushButtonPin5,INPUT_PULLUP);
  pinMode(pushButtonPin6,INPUT_PULLUP);
  pinMode(pushButtonPin7,INPUT_PULLUP);
  pinMode(pushButtonPin8,INPUT_PULLUP);
  pinMode(pushButtonPin9,INPUT_PULLUP);
}

void loop() {
  while(digitalRead(pushButtonPin) == LOW){
  // change the angle for next time through the loop:
  angle = angle + angleStep;
  if (angle <0){
    angle =0;
  }
    myservo.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while
while(digitalRead(pushButtonPin1) == LOW){
  // change the angle for next time through the loop:
  angle = angle - angleStep;
  if (angle >180){
    angle =180;
  }
    myservo.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while


  while(digitalRead(pushButtonPin2) == LOW){
  // change the angle for next time through the loop:
  angle1 = angle1 + angleStep;
  if (angle1 <0){
    angle1 =0;
  }

    myservo1.write(angle1); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle1);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while
while(digitalRead(pushButtonPin3) == LOW){
  // change the angle for next time through the loop:
  angle1 = angle1 - angleStep;
  if (angle1 >180){
    angle1 =180;
  }
    myservo1.write(angle1); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle1);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while

  while(digitalRead(pushButtonPin4) == LOW){
  // change the angle for next time through the loop:
  angle2 = angle2 + angleStep;
  if (angle2 <0){
    angle2 =0;
  }
    myservo2.write(angle2); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle2);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while
while(digitalRead(pushButtonPin5) == LOW){
  // change the angle for next time through the loop:
  angle2 = angle2 - angleStep;
  if (angle2 >180){
    angle2 =180;
  }
    myservo2.write(angle2); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle2);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while

  while(digitalRead(pushButtonPin6) == LOW){
  // change the angle for next time through the loop:
  angle3 = angle3 + angleStep;
  if (angle3 <0){
    angle3 =0;
  }
    myservo3.write(angle3); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle3);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while
while(digitalRead(pushButtonPin7) == LOW){
  // change the angle for next time through the loop:
  angle3 = angle3 - angleStep;
  if (angle3 >180){
    angle3 =180;
  }
    myservo3.write(angle3); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle3);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while

  while(digitalRead(pushButtonPin8) == LOW){
  // change the angle for next time through the loop:
  angle4 = angle4 + angleStep;
  if (angle4 <0){
    angle4 =0;
  }
    myservo4.write(angle4); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle4);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while
while(digitalRead(pushButtonPin9) == LOW){
  // change the angle for next time through the loop:
  angle4 = angle4 - angleStep;
  if (angle4 >180){
    angle4 =180;
  }
    myservo4.write(angle4); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle4);   // print the angle
      Serial.println(" degree");    
  delay(100); // waits for the servo to get there
  }// while
}//loop
