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
   lcd.print("TL: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(" ");
   delay(1000);
   lcd.clear();
   lcd.print("BD: ");
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
   lcd.clear();
  if (ok == HIGH){
    delay(1000);
    TL = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(" ");
     lcd.print("BL: ");
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(" ");
     lcd.print("BD: ");
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(" ");
     lcd.print("TE: ");
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
    break;
  }
  delay(100);
  lcd.clear();
  }

  // UTARA
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(" ");
   delay(1000);
   lcd.clear();
   lcd.print("BD: ");
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
   lcd.clear();
  if (ok == HIGH){
    delay(1000);
    U = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.print("BL: ");
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(" ");
     lcd.print("BD: ");
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(" ");
     lcd.print("TE: ");
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
    break;
  }
  delay(100);
  lcd.clear();
  }

  // BARAT LAUT
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(U);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(" ");
   delay(1000);
lcd.clear();
   lcd.print("BD: ");
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
lcd.clear();
  if (ok == HIGH){
    delay(1000);
    BL = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.print("BL: ");
     lcd.print(BL);
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(" ");
     lcd.print("BD: ");
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(" ");
     lcd.print("TE: ");
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
    break;
  }
  delay(100);
  lcd.clear();
  }

  // BARAT
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(U);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(BL);
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   delay(1000);
lcd.clear();
   lcd.print("BD: ");
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
lcd.clear();

  if (ok == HIGH){
    delay(1000);
    B = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.print("BL: ");
     lcd.print(BL);
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(B);
     lcd.print(" ");
     lcd.print("BD: ");
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(" ");
     lcd.print("TE: ");
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
    break;
  }
  delay(100);
  lcd.clear();
  }

  // BARAT DAYA
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(U);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(BL);
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(B);
   lcd.print(" ");
   delay(1000);
lcd.clear();
   lcd.print("BD: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
lcd.clear();
  if (ok == HIGH){
    delay(1000);
    BD = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.setCursor(0,1);
     lcd.print("BL: ");
     lcd.print(BL);
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(B);
     lcd.print(" ");
     delay(1000);
lcd.clear();
     lcd.print("BD: ");
     lcd.print(BD);
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(" ");
     lcd.setCursor(0,1);
     lcd.print("TE: ");
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
     delay(1000);
lcd.clear();
    break;
  }
  delay(100);
  }

  // SELATAN
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(U);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(BL);
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(B);
   lcd.print(" ");
   delay(1000);
lcd.clear();
   lcd.print("BD: ");
   lcd.print(BD);
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
lcd.clear();
  if (ok == HIGH){
    delay(1000);
    S = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.setCursor(0,1);
     lcd.print("BL: ");
     lcd.print(BL);
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(B);
     lcd.print(" ");
     delay(1000);
lcd.clear();
     lcd.print("BD: ");
     lcd.print(BD);
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(S);
     lcd.print(" ");
     lcd.setCursor(0,1);
     lcd.print("TE: ");
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
     delay(1000);
lcd.clear();

    break;
  }
  delay(100);
  }

  // TENGGARA
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(U);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(BL);
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(B);
   lcd.print(" ");
   delay(1000);
lcd.clear();
   lcd.print("BD: ");
   lcd.print(BD);
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(S);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(compass.getAzimuth());
   lcd.print(" ");
   lcd.print("T: ");
   lcd.println();
   delay(1000);
lcd.clear();
  if (ok == HIGH){
    delay(1000);
    TE = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.setCursor(0,1);
     lcd.print("BL: ");
     lcd.print(BL);
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(B);
     lcd.print(" ");
     delay(1000);
lcd.clear();
     lcd.print("BD: ");
     lcd.print(BD);
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(S);
     lcd.print(" ");
     lcd.setCursor(0,1);
     lcd.print("TE: ");
     lcd.print(TE);
     lcd.print(" ");
     lcd.print("T: ");
     lcd.println();
     delay(1000);
lcd.clear();
    break;
  }
  delay(100);
  }

  // TIMUR
  while(1){ 
  compass.read();
   lcd.print("TL: ");
   lcd.print(TL);
   lcd.print(" ");
   lcd.print("U: ");
   lcd.print(U);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("BL: ");
   lcd.print(BL);
   lcd.print(" ");
   lcd.print("B: ");
   lcd.print(B);
   lcd.print(" ");
   delay(1000);
lcd.clear();
   lcd.print("BD: ");
   lcd.print(BD);
   lcd.print(" ");
   lcd.print("S: ");
   lcd.print(S);
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("TE: ");
   lcd.print(TE);
   lcd.print(" ");
   lcd.print("T: ");
   lcd.print(compass.getAzimuth());
   lcd.println();
   delay(1000);
lcd.clear();
  if (ok == HIGH){
    delay(1000);
    T = compass.getAzimuth();
     lcd.print("TL: ");
     lcd.print(TL);
     lcd.print(" ");
     lcd.print("U: ");
     lcd.print(U);
     lcd.print(" ");
     lcd.print("BL: ");
     lcd.print(BL);
     lcd.print(" ");
     lcd.print("B: ");
     lcd.print(B);
     lcd.print(" ");
     lcd.print("BD: ");
     lcd.print(BD);
     lcd.print(" ");
     lcd.print("S: ");
     lcd.print(S);
     lcd.print(" ");
     lcd.print("TE: ");
     lcd.print(TE);
     lcd.print(" ");
     lcd.print("T: ");
     lcd.print(T);
     lcd.println();
    break;
  }
  delay(100);
  }
}
