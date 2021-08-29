/*=============== Program Serial Komunikasi ===============*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/

// Software Serial for Receiver
// Gunakan pin digital atau analog
// Sesuaikan pin dengan board yang digunakan

#include <SoftwareSerial.h> // Library wajib
SoftwareSerial komunikasi2(7, 6);
// SoftwareSerial komunikasi2(pin1, pin2);
// pin1 = Rx, pin2 = Tx

void setup() {
Serial.begin(9600);
komunikasi2.begin(9600); // Pengirim/penerima data ke/dari board lain. Sesuaikan baud rate dengan Serial dan board lain
while (!Serial);
}

void loop() {
if (komunikasi2.available()) {
int y;
y = komunikasi2.read(); // Mengambil data yang dikirim dari board lain
Serial.println(y); // Menampilkan data yang diterima
}
}
