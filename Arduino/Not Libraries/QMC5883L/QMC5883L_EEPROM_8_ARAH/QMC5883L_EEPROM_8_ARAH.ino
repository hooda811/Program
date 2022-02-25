/* Sensor Kompas + EEPROM
 *  EEPROM perlu diperiksa lagi

Dicoba di Arduino Mega
Nama : QMC5883L
Uji coba : HW-127
Output :
  * U: 98 B: S: T:
Cara Kerja :
 * Saat awal, nilai U akan berubah terus menerus
 * Ketika tombol ditekan, maka U akan tetap dan B mulai berubah - ubah
 * Dan seterusnya hingga T
 * Ketika T dan tombol ditekan, maka monitor akan kembali lagi ke awal ( U berubah lagi, yang artinys kalibrasi selesai)
Wirig :
 Wiring 
 * Tomnbol : temrinal bebas. Satu ke gnd, satu ke pin digital board 
*/

#include <EEPROM.h>
  int TL;
  int U;
  int BL;
  int B;
  int BD;
  int S;
  int TE;
  int T;
#include <QMC5883LCompass.h>
QMC5883LCompass compass;
#define ok_pin 8
#define ok !digitalRead(ok_pin)

void setup() {
  Serial.begin(9600);
  pinMode(ok_pin, INPUT_PULLUP);
  compass.init();
}

void loop() {
  baca_arah(); 
  Serial.print("EEPROM TL : ");
  Serial.println(EEPROM.read(9));
  Serial.print("EEPROM U : ");
  Serial.println(EEPROM.read(1));
  Serial.print("EEPROM BL : ");
  Serial.println(EEPROM.read(11));
  Serial.print("EEPROM B : ");
  Serial.println(EEPROM.read(10));
  Serial.print("EEPROM BD : ");
  Serial.println(EEPROM.read(4));
  Serial.print("EEPROM S : ");
  Serial.println(EEPROM.read(5));
  Serial.print("EEPROM : ");
  Serial.println(EEPROM.read(6));
  Serial.print("EEPROM : ");
  Serial.println(EEPROM.read(7));
  delay(3000);
}
