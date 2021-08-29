/*=============== Program Anti Septik Otomatis ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/
/*================= Board: Arduino Uno =================*/

#define relay 10 // Relay ke pin 10
#define isd 8 // isd ke pin 8
#define trigPin 13 // trigPin ke pin 13
#define echoPin 12 // echoPin ke pin 12

long duration, distance;
long unsigned int lowIn;
long unsigned int pause =3000;
boolean lockLow =true;
boolean takeLowTime;

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(isd, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(relay, HIGH);
}

void loop() {
  Sensor2(); // Memanggil void Sensor2
}
