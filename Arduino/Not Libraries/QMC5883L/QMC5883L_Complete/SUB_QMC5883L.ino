void subMC5883L(){
   int x, y, z, a, b;
  char myArray[3];
  
  compass.read();
  
  x = compass.getX();
  y = compass.getY();
  z = compass.getZ();
  
  a = compass.getAzimuth();
  
  b = compass.getBearing(a);

  compass.getDirection(myArray, a);

  float
  heading = atan2(x,y)/0.0174532925;
  if (heading<0)
    heading+=360;
    heading=360-heading;
    // N=0/360, E=90, S=180, W=270
  
  Serial.print("X: ");
  Serial.print(x);

  Serial.print(" Y: ");
  Serial.print(y);

  Serial.print(" Z: ");
  Serial.print(z);

  Serial.print(" Azimuth: ");
  Serial.print(a);

  Serial.print(" Bearing: ");
  Serial.print(b);

  Serial.print(" Direction: ");
  Serial.print(myArray[0]);
  Serial.print(myArray[1]);
  Serial.print(myArray[2]);
  Serial.print(" Sudut : ");
  Serial.print(heading);
  Serial.println();

  delay(250);
}
