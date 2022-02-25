/* Sensor Kompas
Koordinat Arah
TL = 45
U = 0 atau 360
BL = 315
B = 270
BD = 225
S = 180
TE =135
T = 90
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
  sub(); 
}
