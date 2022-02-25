#include <Servo.h>
#include <SPI.h>
#include <RFID.h>

RFID rfid(10, 9);

byte kart[5] = {12,12,31,21,156};
/* byte kartu[3][5] = 
{
  {121, 23, 121, 156, 139},
  {136, 4, 118, 81, 171},
  {136, 2, 63, 226, 87}
};*/
Servo myservo1;
Servo myservo2;
boolean card;
const int LED_1 = 2;
const int LED_2 = 3;
const int servoPin1 = 5; 
const int servoPin2 = 7;
const int button = 8;
const int buzzer = 4;
bool statuse = 1;
float sinVal;
int toneVal;
int buttonstate = 0;

void setup()
{

  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  SPI.begin();
  rfid.init();
  myservo1.attach(servoPin1);
  myservo2.attach(servoPin2);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  SPI.begin();
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
}

void buka()
{
  myservo1.write(130);
  delay(30);
  myservo2.write(0);
  delay(30);
  delay(4000);
}

void tutup()
{
  myservo1.write(0);
  myservo2.write(130);
}

void loop()
{
 buttonstate = digitalRead(button);
  {
    if (buttonstate == LOW)
    {
      digitalWrite(LED_1, HIGH);
      for(int x=0; x<180; x++)
      {
        sinVal = (sin(x*(3.1412/180)));
        toneVal = 2000+(int(sinVal*1000));
        tone(buzzer, toneVal);
        delay(2);
      }
      noTone(7);
      myservo1.write(130);
      delay(30);
      myservo2.write(0);
      delay(30);
      delay(4000);

    }
    else
    {
      digitalWrite(LED_1, LOW);
       myservo1.write(0);
      delay(30);
      myservo2.write(130);
      delay(30);
    }
  }

  if (rfid.isCard())
  {


    if (rfid.readCardSerial())
    {
      Serial.print("Found ID: ");
      Serial.print(rfid.serNum[0]);
      Serial.print(",");
      Serial.print(rfid.serNum[1]);
      Serial.print(",");
      Serial.print(rfid.serNum[2]);
      Serial.print(",");
      Serial.print(rfid.serNum[3]);
      Serial.print(",");
      Serial.println(rfid.serNum[4]);

    }
    for (int i = 1; i < 5; i++)
    {
      if (rfid.serNum[0] == kart[0] && rfid.serNum[1] == kart[1] && rfid.serNum[2] == kart[2] && rfid.serNum[3] == kart[3] && rfid.serNum[4] == kart[4])
      {
        card = true;
      }
      else {
        card = false;
      }
    }
    if (card == true)
    {
     Serial.print("ACC");
          Serial.println(" ");
           digitalWrite(LED_1, LOW);
              digitalWrite(LED_2, HIGH);
              delay(500);
              digitalWrite(LED_2, LOW);
              buka();
              tutup();
    }
    
      else
         {
          Serial.print("DENIED");
          Serial.println(" ");
           digitalWrite(LED_1, HIGH);
            for(int x=0; x<180; x++)
           {
            sinVal = (sin(x*(3.1412/180)));
            toneVal = 2000+(int(sinVal*1000));
            tone(buzzer, toneVal);
            delay(2);
            break;
           }
            noTone(7);
            
         }

    }
    rfid.halt();
  }
