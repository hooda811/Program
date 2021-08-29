/*========== Dasar - Dasar Program Arduino ==========*/
/*========== Oleh: https://github.com/hooda811/ ==========*/ 
/*== Program lain: https://github.com/hooda811/Program ==*/
/* Halaman ini adalah main tab
 * ============
 * Bagian ini biasanya digunakan untuk memberikan keterangan program. Misal-
 * keterangan berupa nama penulis program, sumber program, dll
 * ============
 * Untuk menuliskan keterangan atau komentar, bisa digunakan "//" (tanpa tanda petik) di awal kalimat keterangan, atau-
 */
 // "/*" di awal keterangan dan "*/" di akhir keterangan (tanpa tanda petik)
 /*
 * Bagian mulai dari paling atas sampai di atas kode void setup(){ adalah-
 * tempat untuk mendeklarasikan variabel, misal:
 */


int lampu = 1; // Variabel lampu disambungkan dengan pin 1 pada board. Misal board Arduino Uno
int lampu1; // Hanya pendeklarasian variabel lampu sebagai data integer

void setup() {

/* Bagian ini adalah tempat pendeklarasian program yang berjalan hanya sekali saja  
 * ==========
 * Biasanya bagian ini diisi dengan program Serial.begin(9600) untuk mengaktifkan Serial Monitor
 * ==========
 * Bagian ini juga bisa untuk menyebutkan suatu pin sebagai input atau OUTPUT dengan pinMode, misal:
 * pinMode(lampu, OUTPUT);
 * ==========
 * Bagian ini juga bisa untuk menyebutkan suatu pin dalam kondisi HIGH (Aktif) atau LOW (Nonaktif), misal:
 * digitalWrite(lampu, HIGH);
 * digitalWrite(lampu, LOW);
 * analogWrite(lampu, HIGH);
 * analogWrite(lampu, LOW);
 * ==========
 * Bagian ini juga bisa untuk menuliskan serial komunikasi seperti:
 * komunikasiserial.begin(9600);
 * ==========
 * Bagian ini juga bisa untuk menampilkan tulisan di Serial Monitor, misal:
 * Serial.print("Arduino Dasar");
 * Serial.println("Arduino Uno");
 * ==========
 * Bagian ini juga bisa untuk memanggil void lain, misal:
 * namavoid();
 */
}

void loop() {
  /* Bagian ini berfungsi untuk melakukan fungsi perulangan, misal:
   * digitalWrite(ledPin, HIGH);
   * delay(500);
   * program sederhana di dua baris di atas akan melakukan perulangan led menyala selama 0,5 detik terus - menerus
   * ========
   * Bagian ini juga bisa untuk menyebutkan suatu pin dalam kondisi HIGH (Aktif) atau LOW (Nonaktif), misal:
   * digitalWrite(lampu, HIGH);
   * digitalWrite(lampu, LOW);
   * analogWrite(lampu, HIGH);
   * analogWrite(lampu, LOW);
   * ==========
   * Bagian ini juga bisa untuk menampilkan tulisan di Serial Monitor, misal:
   * Serial.print("Arduino Dasar");
   * Serial.println("Arduino Uno");
   * ==========
   * Bagian ini juga bisa untuk memanggil void lain, misal:
   * namavoid();
   */
}
