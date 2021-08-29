/*========== PROGRAM UNTUK NODEMCU ESP8266 ==========*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/
// Firebase
#include "FirebaseESP8266.h"
#include <ESP8266WiFi.h>
const char* ssid = "jaringankuu"; // Nama jaringan hotspot WiFi
const char* password = "Komponen08"; // Kata sandi hotspot WiFi
FirebaseData firebaseData;

// LCD
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); // Alamat LCD dan jumlah kolom+baris

// Fingerprint
#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>
#define FP1 D3 // IN
#define FP2 D4 // OUT
int getFingerprintIDez();
SoftwareSerial mySerial(FP1, FP2);
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);
uint8_t id;

int val = 0;
int counter = 1;

// Buzzer
#define buzzer2 D5
float sinVal;
int toneVal;

// Doorlock
#define doorlock D6

// Software Serial Nodemcu Esp8266 to Arduino Uno
SoftwareSerial komunikasi(D8, D7);
// D8 as Rx, D7 as Tx
uint8_t num = 0;
void setup()
{
  Serial.begin(9600);
  // Koneksi WiFi
  konekWifi();
  
  // Koneksi Firebase
  Firebase.begin("https://iot-smart-home-e2882-default-rtdb.firebaseio.com/", "vyZi2Rcc3C87nwwQyVHy0YPEdNjGubc2JgTKHUEF");
  //Firebase.begin("firebase host", "firebase auth database");

  // Fingerprint
  Serial.println("fingertest");
  // set the data rate for the sensor serial port
  finger.begin(57600);
  if (finger.verifyPassword()) {
  Serial.println("Sensor fingerprint ditemukan");
  } else {
  Serial.println("Sensor fingerprint tidak ditemukan");
  while (1);}
  // Serial Komunikasi
  komunikasi.begin(9600);

  // LCD
  lcd.begin();

  // INPUT & OUTPUT
  pinMode(buzzer2, OUTPUT);
  pinMode(doorlock, OUTPUT);
  pinMode(doorlock, LOW); 
}

void loop()
{
  kontrol();
}
