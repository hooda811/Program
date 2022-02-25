void baca_arah(){

  // TIMUR LAUT
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    TL = compass.getAzimuth();
    EEPROM.write(9, TL);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // UTARA
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    U = compass.getAzimuth();
    EEPROM.write(1, U);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // BARAT LAUT
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    BL = compass.getAzimuth();
    EEPROM.write(11, BL);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(BL);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // BARAT
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(BL);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    B = compass.getAzimuth();
    EEPROM.write(10, B);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(BL);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // BARAT DAYA
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(BL);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    BD = compass.getAzimuth();
    EEPROM.write(4, BD);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(BL);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(BD);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // SELATAN
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(BL);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(BD);
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    S = compass.getAzimuth();
    EEPROM.write(5, S);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(BL);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(BD);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(S);
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // TENGGARA
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(BL);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(BD);
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(S);
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    TE = compass.getAzimuth();
    EEPROM.write(6, TE);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(BL);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(BD);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(S);
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(TE);
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }

  // TIMUR
  while(1){ 
  compass.read();
  Serial.print("TL: ");
  Serial.print(TL);
  Serial.print(" ");
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("BL: ");
  Serial.print(BL);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print("BD: ");
  Serial.print(BD);
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(S);
  Serial.print(" ");
  Serial.print("TE: ");
  Serial.print(TE);
  Serial.print(" ");
  Serial.print("T: ");
  Serial.print(compass.getAzimuth());
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    T = compass.getAzimuth();
    EEPROM.write(7, T);
    Serial.print("TL: ");
    Serial.print(TL);
    Serial.print(" ");
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("BL: ");
    Serial.print(BL);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("BD: ");
    Serial.print(BD);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(S);
    Serial.print(" ");
    Serial.print("TE: ");
    Serial.print(TE);
    Serial.print(" ");
    Serial.print("T: ");
    Serial.print(T);
    Serial.println();
    break;
  }
  delay(100);
  }
}
