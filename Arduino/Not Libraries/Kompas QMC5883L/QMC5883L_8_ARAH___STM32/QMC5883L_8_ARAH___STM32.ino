/*=============== Program Kompas QMC5883L 8 Arah+STM32 ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

/* Sensor Kompas

Dicoba di STM32F4-DISCOVERY
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
 * Tomnbol : terminal bebas. Satu ke gnd, satu ke pin digital board 
*/

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#include <QMC5883LCompass.h>
QMC5883LCompass compass;
#define ok_pin PD7
#define ok !digitalRead(ok_pin)

void setup() {
  lcd.begin();
  pinMode(ok_pin, INPUT_PULLUP);
  compass.init();
}

void loop() {
  sub(); 
}
