void subMC5883L(){
  // Arah Utara
  int U;
  int B;
  int S;
  int T;
  while(1){ 
  compass.read();
  Serial.print("U: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    U = compass.getAzimuth();
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
    
  }
  delay(100);
  }
  // Arah Barat
  while(1){
  compass.read();
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    B = compass.getAzimuth();
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
  }
  delay(100);
  }
  // Arah Selatan
  while(1){
  compass.read();
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(compass.getAzimuth());
  Serial.print(" ");
  Serial.print("T: ");
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    S = compass.getAzimuth();
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(S);
    Serial.print(" ");
    Serial.print("T: ");
    Serial.println();
    break;
    delay(1000);
  }
  delay(100);
  }
   // Arah Timur
  while(1){
  compass.read();
  Serial.print("U: ");
  Serial.print(U);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print("S: ");
  Serial.print(S);
  Serial.print(" ");
  Serial.print("T: ");
  Serial.print(compass.getAzimuth());
  Serial.println();
  if (ok == HIGH){
    delay(1000);
    T = compass.getAzimuth();
    Serial.print("U: ");
    Serial.print(U);
    Serial.print(" ");
    Serial.print("B: ");
    Serial.print(B);
    Serial.print(" ");
    Serial.print("S: ");
    Serial.print(S);
    Serial.print(" ");
    Serial.print("T: ");
    Serial.print(T);
    Serial.println();
    break;
  }
  delay(100);
  }
}
