void daftar_off(){
  getFingerprintIDez();
  delay(2000);   
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
  daftar_off();  
  kontrol();
}
p = finger.image2Tz();
if (p != FINGERPRINT_OK)  return -1;
p = finger.fingerFastSearch();
if (p != FINGERPRINT_OK)  return -1;
// found a match!
Serial.print("Sidik jari dengan ID "); Serial.print(finger.fingerID);
Serial.print(" ditemukan dengan keakuratan "); Serial.println(finger.confidence);
delay(200);
if (counter == 0)
      {
        counter = 1;
      }
  else
      {
        counter = 0;
      }
  if (counter == 0)
  {
     bunyi();
     digitalWrite(doorlock, LOW);
     delay(500);
     Serial.print("Doorlock ON");
     Serial.println("");
     komunikasi.write("9");
     delay(100);
     daftar_off();
  }
  else if (counter == 1)
  {
     bunyi();
     digitalWrite(doorlock, LOW);
     delay(500);
     Serial.print("Doorlock OFF");
     Serial.println("");
     komunikasi.write("10");
     delay(100);
     daftar_off();
  }
  else
  {
    counter = 0;
  }
return finger.fingerID;
}
