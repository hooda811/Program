/* Sensor Kompas
Nama : QMC5883L
Uji coba : HW-127
Output :
  * X: 1005
  * Y: -147
  * Z: 1281
  * Azimuth: 352
  * Bearing: 15
  * Direction: NNW
*/


#include <QMC5883LCompass.h>

QMC5883LCompass compass;

void setup() {
  Serial.begin(9600);
  compass.init();
}

void loop() {
  subMC5883L(); 
}
