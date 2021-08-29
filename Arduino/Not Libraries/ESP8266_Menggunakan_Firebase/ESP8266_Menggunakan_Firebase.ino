/*=============== Program Firebase ESP8266 ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

#include "FirebaseESP8266.h" // Library wajib
#include <ESP8266WiFi.h> // Library wajib
const char* ssid = "jaringankuu"; // Nama hotspot WiFi
const char* password = "Komponen08"; // Kata sandi hotspot WiFi
FirebaseData firebaseData; // FirebaseData namabebas

#define relay D1 // Pin relay
 
void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW); //nilai awal relay akan off 
  konekWifi();
  Firebase.begin("https://iot-smart-home-e2882-default-rtdb.firebaseio.com/", "vyZi2Rcc3C87nwwQyVHy0YPEdNjGubc2JgTKHUEF");
  //Firebase.begin("firebase host", "firebase auth database");
  /* firebase host = link database Firebase
   * firebase auth = kata sandi database (Cari di project settings > Service accounts > Database secrets >
   */
}
 
void loop() {
  if (Firebase.getString(firebaseData, "/kontrol")) { // Mengambil data string dari /namadatabase
    if  (firebaseData.dataType() == "string") // Menentukan tipe data string
    {
      String FBStatus = firebaseData.stringData();
      if (FBStatus == "11") { // Jika data yang diambil adalah 11, maka:                                
      Serial.println("Fan ON"); // Tampilkan tulisan Fan ON
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol"); // Menghapus data di /namadatabase
      }
      if (FBStatus == "22") { // Jika data yang diambil adalah 22, maka:
      Serial.println("Fan OFF"); // Tampilkan tulisan Fan OFF
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol"); // Menghapus data di /namadatabase
      }
    }
  }
}
