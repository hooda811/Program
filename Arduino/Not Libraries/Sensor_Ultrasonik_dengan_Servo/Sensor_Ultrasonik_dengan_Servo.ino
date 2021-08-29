/*=============== Program Sensor Ultrasonik + Servo ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

#include <Servo.h>
Servo serpo;
int trig = 6;           // membuat varibel trig yang di set ke-pin 3
int echo = 5;           // membuat variabel echo yang di set ke-pin 2
long durasi, jarak;     // membuat variabel durasi dan jarak
int serp = 0;
void setup() {
  pinMode(trig, OUTPUT);    // set pin trig menjadi OUTPUT
  pinMode(echo, INPUT);     // set pin echo menjadi INPUT
  Serial.begin(9600);       // digunakan untuk komunikasi Serial dengan komputer
  serpo.attach(9); // 9 adalah pin pada board
}

void loop() {

  // program dibawah ini agar trigger memancarakan suara ultrasonic
  digitalWrite(trig, LOW);
  delayMicroseconds(8);
  digitalWrite(trig, HIGH);
  delayMicroseconds(8);
  digitalWrite(trig, LOW);
  delayMicroseconds(8);

  durasi = pulseIn(echo, HIGH); // menerima suara ultrasonic
  jarak = (durasi / 2) / 29.1;  // mengubah durasi menjadi jarak (cm)
  Serial.print(jarak);
  Serial.println(" mm");        // menampilkan jarak pada Serial Monitor
  Serial.print("Serpo= ");
  Serial.println(serp);


  for (serp = jarak; serp <= 180; serp += 1) { // Bergerak dari 0 derajat ke 180 derajat
    // in steps of 1 degree
    serpo.write(serp);              // Memberitahu servo untuk menuju posisi variabel serp
    delay(15);                       // Menunggu 15 ms untuk servo mencapai posisi tersebut
  }
  for (serp = 180; serp >= jarak; serp -= 1) { // Bergerak dari 180 derajat ke 0 derajat
    serpo.write(serp);              // Memberitahu servo untuk menuju posisi variabel serp
    delay(15);  
   
}
}
