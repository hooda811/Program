/*=============== Program Serial Komunikasi ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

// Software Serial for Sender
// Gunakan pin digital atau analog
// Sesuaikan pin dengan board yang digunakan

#include <SoftwareSerial.h> // Library wajib
SoftwareSerial komunikasi(D8, D7);
// SoftwareSerial komunikasi(pin1, pin2);
// pin1 = Rx, pin2 = Tx
void setup(){
Serial.begin(9600);
komunikasi.begin(9600); // Pengirim/penerima data ke/dari board lain. Sesuaikan baud rate dengan Serial dan board lain
delay(2000);
}
void loop()
{
int h = 100 ;
komunikasi.write(h); // Mengirim data ke board lain
Serial.println(h);
delay(1000);
}
