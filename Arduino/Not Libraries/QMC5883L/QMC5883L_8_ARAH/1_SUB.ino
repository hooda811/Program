void sub(){
  int TL;
  int U;
  int BL;
  int B;
  int BD;
  int S;
  int TE;
  int T;

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
