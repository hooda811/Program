/*=============== Program Kontrol Motor ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/
// Program sudah disimulasikan di Proteus dan bekerja dengan baik
// buttonState1 mengatur motor untuk berputar ke kiri
// buttonState2 mengatur motor untuk berputar ke kanan
// Servo1 mengatur kecepatan putaran motor
// HIGH = 255, LOW = 0

#define EN2 9
#define IN3 13
#define IN4 12
byte servo1= A0;
int kecepatan;
int output;
const int buttonPin1 = A1;     
const int buttonPin2 = A2;  
int buttonState1 = 0;    
int buttonState2 = 0; 

void setup() {
pinMode (EN2, OUTPUT);
pinMode (IN3, OUTPUT);
pinMode (IN4, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
}

void loop() {
kecepatan= analogRead(servo1);
output= map(kecepatan, 0, 1223, 0, 255);
analogWrite(EN2, output);
buttonState1 = digitalRead(buttonPin1); 
buttonState2 = digitalRead(buttonPin2);
if (buttonPin1 == HIGH) {
    digitalWrite(IN3, HIGH); 
    }

if (buttonPin2 == HIGH) {
    digitalWrite(IN4, HIGH);
    }

digitalWrite(IN3,buttonState1);
digitalWrite(IN4,buttonState2);
}
