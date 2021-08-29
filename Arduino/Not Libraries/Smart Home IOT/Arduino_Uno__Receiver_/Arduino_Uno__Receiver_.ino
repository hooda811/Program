/*========== PROGRAM UNTUK ARDUINO UNO ==========*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

#include <Servo.h>
#include <SPI.h>
#include <RFID.h>
#include <SoftwareSerial.h>
SoftwareSerial komunikasi2(A1,A0);

RFID rfid(10, 9);
Servo myservo1;
Servo myservo2;

int fan1 = A3;

byte kartu[3][5] = 
{
  {121, 23, 121, 156, 139},
  {136, 4, 118, 81, 171},
  {136, 2, 63, 226, 87}
};

int LED_1 = 2;
int LED_2 = 3;
const int servoPin1 = 5;
const int servoPin2 = 7;
int button = 8;
int buzzer = 4;
int pir = 6;

boolean card;
int buttonstate = 0;

float sinVal;
int toneVal;

int state = LOW;
int val = 0;

int counter = 0;
void setup()
{
  Serial.begin(9600);
  komunikasi2.begin(9600);
  while(!Serial);
  SPI.begin();
  rfid.init();
  
  myservo1.attach(servoPin1);
  myservo2.attach(servoPin2);

  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(pir, INPUT);
  pinMode(fan1, OUTPUT);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  analogWrite(fan1, LOW);
  Serial.println("Place card or tag near reader...");
}

void buka() 
{
  myservo1.write(340);
}

void tutup()
{
  myservo1.write(0);
}

void loop()
{
  serialkomunikasi();
  button1();
  rfid1();
  PIR_s();
}
