/*=============== ESP8266 ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

#include <Adafruit_Fingerprint.h> // Library wajib
#include <SoftwareSerial.h> // Library wajib
#define FP1 D3 // Pin Rx digital
#define FP2 D4 // Pin Tx digital
#define buzzer D5 // Pin buzzer
#define relay D6 // Pin relay

int getFingerprintIDez();
// VCC = 3.3V
// GND = Ground
// pin D3 adalah IN
// pin D4 adalah OUT
SoftwareSerial mySerial(FP1, FP2);
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);
void setup()
{
Serial.begin(9600);
Serial.println("fingertest");
// set the data rate for the sensor serial port
finger.begin(57600);
if (finger.verifyPassword()) {
Serial.println("Sensor fingerprint ditemukan");
} else {
Serial.println("Sensor fingerprint tidak ditemukan");
while (1);
}
Serial.println("Menunggu sidik jari...");
delay(3000);
pinMode(relay, OUTPUT);
pinMode(buzzer,OUTPUT);
digitalWrite(relay, LOW); // Sesuaikan kondisi ini dengan relay yang digunakan
}
void loop()                     // run over and over again
{
getFingerprintIDez();
delay(2000);            //don’t ned to run this at full speed.

}
uint8_t getFingerprintID() {
uint8_t p = finger.getImage();
switch (p) {
case FINGERPRINT_OK:
Serial.println("Image taken");
break;
case FINGERPRINT_NOFINGER:
Serial.println("Sidik jari tidak terdeteksi");
return p;
case FINGERPRINT_PACKETRECIEVEERR:
Serial.println("Komunikasi error");
return p;
case FINGERPRINT_IMAGEFAIL:
Serial.println("Imaging error");
return p;
default:
Serial.println("Unknown error");
return p;
}
// OK success!
p = finger.image2Tz();
switch (p) {
case FINGERPRINT_OK:
Serial.println("Image converted");
break;
case FINGERPRINT_IMAGEMESS:
Serial.println("Image too messy");
return p;
case FINGERPRINT_PACKETRECIEVEERR:
Serial.println("Komunikasi error");
return p;
case FINGERPRINT_FEATUREFAIL:
Serial.println("Could not find fingerprint features");
return p;
case FINGERPRINT_INVALIDIMAGE:
Serial.println("Could not find fingerprint features");
return p;
default:
Serial.println("Unknown error");
return p;
}
// OK converted!
p = finger.fingerFastSearch();
if (p == FINGERPRINT_OK) {
Serial.println("Sidik jari ditemukan");
} else if (p == FINGERPRINT_PACKETRECIEVEERR) {
Serial.println("Communication error");
return p;
} else if (p == FINGERPRINT_NOTFOUND) {
Serial.println("Tidak menemukan sidik jari");
return p;
} else {
Serial.println("Unknown error");
return p;
}
// found a match!
Serial.print("Sidik jari dengan ID "); Serial.print(finger.fingerID);
Serial.print(" ditemukan dengan keakuratan "); Serial.println(finger.confidence);

}
// returns -1 if failed, otherwise returns ID #
int getFingerprintIDez() {
uint8_t p = finger.getImage();
if (p != FINGERPRINT_OK){
  Serial.print("Tidak ditemukan sidik jari");
  Serial.println(" ");
}
p = finger.image2Tz();
if (p != FINGERPRINT_OK)  return -1;
p = finger.fingerFastSearch();
if (p != FINGERPRINT_OK)  return -1;
// found a match!
Serial.print("Sidik jari dengan ID "); Serial.print(finger.fingerID);
Serial.print(" ditemukan dengan keakuratan "); Serial.println(finger.confidence);
play('g', 2);       
play('E', 1);
digitalWrite(relay, HIGH);
delay(500);
Serial.print("relay");
return finger.fingerID;
}
