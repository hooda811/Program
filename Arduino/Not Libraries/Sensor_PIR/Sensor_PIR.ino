/*=============== Program Sensor PIR HCSR501 ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

int led = 13; // LED ke pin 13
int pirPin = 2; // PIR Out ke pin 2
int pirStat = 0; // PIR status

void setup() {
 pinMode(led, OUTPUT);     
 pinMode(pirPin, INPUT);     
 Serial.begin(9600);
}
void loop(){
 pirStat = digitalRead(pirPin); 
 if (pirStat == HIGH) {            // Jika terdeteksi gerakan, maka:
   digitalWrite(led, HIGH);  // Menyalakan LED
   Serial.println("LED Menyala"); // Menampilkan LED Menyala di Serial Monitor
 } 
 else { // Jika tidak terdeteksi gerakan, maka:
   digitalWrite(ledPin, LOW); // Mematikan LED
   Serial.println("LED Mati"); // Menampilkan LED Mati di Serial Monitor
 }
} 
