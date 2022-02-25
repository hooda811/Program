#include <HMC5883L.h>
HMC5883L compass;

void setup(){
  Serial.begin(9600);
}

void loop(){
  compass_eeprom();
}

void compass_eeprom(void)
{
  unsigned char isii = 0;
  isii = constrain(isii,0,3);
  while(1)
  {
    if(up){while(up); isii--;}
    if(dn){while(dn); isii++;}
    switch (isii)
    {
      case 0: 
      if (ok){while(ok);compass_read();save = (int)headingDegrees;
              EEPROM.put(save_utara, save);print_cursor(0,1,"  Tersimpan!!!  ");delay(1000);}
      if (cl){while(cl);goto endd;}
      print_cursor(0,1,"  Simpan Utara!  ");
      break;
      
      case 1: 
      if (ok){while(ok);compass_read();save = (int)headingDegrees;
              EEPROM.put(save_selatan, save);print_cursor(0,1,"  Tersimpan!!!  ");delay(1000);}
      if (cl){while(cl);goto endd;}
      print_cursor(0,1," Simpan Selatan! ");
      break;

      case 2: 
      if (ok){while(ok);compass_read();save = (int)headingDegrees;
              EEPROM.put(save_timur, save);print_cursor(0,1,"  Tersimpan!!!  ");delay(1000);}
      if (cl){while(cl);goto endd;}
      print_cursor(0,1,"  Simpan Timur!  ");
      break;
      case 3: 
      if (ok){while(ok);compass_read();save = (int)headingDegrees;
              EEPROM.put(save_barat, save);print_cursor(0,1,"  Tersimpan!!!  ");delay(1000);}
      if (cl){while(cl);goto endd;}
      print_cursor(0,1,"  Simpan Barat!  ");
      break;
    }
  }
  end:;
}


void compass_init(void)
{
  while (!compass.begin())
  {
    Serial.println("Could not find a valid HMC5883L sensor, check wiring!");
    delay(500);
  }

  // Set measurement range
  compass.setRange(HMC5883L_RANGE_1_3GA);

  // Set measurement mode
  compass.setMeasurementMode(HMC5883L_CONTINOUS);

  // Set data rate
  compass.setDataRate(HMC5883L_DATARATE_30HZ);

  // Set number of samples averaged
  compass.setSamples(HMC5883L_SAMPLES_8);

  // Set calibration offset. See HMC5883L_calibration.ino
  compass.setOffset(0, 0);
  //input = 180;
}

void compass_read(void)
{
  norm = compass.readNormalize();

  // Calculate heading
  float heading = atan2(norm.YAxis, norm.XAxis);

  // Set declination angle on your location and fix heading
  // You can find your declination on: http://magnetic-declination.com/
  // (+) Positive or (-) for negative
  // For Bytom / Poland declination angle is 4'26E (positive)
  // Formula: (deg + (min / 60.0)) / (180 / M_PI);
  float declinationAngle = (4.0 + (26.0 / 60.0)) / (180 / M_PI);
  heading += declinationAngle;

  // Correct for heading < 0deg and heading > 360deg
  if (heading < 0)
  {
    heading += 2 * PI;
  }

  if (heading > 2 * PI)
  {
    heading -= 2 * PI;
  }

  // Convert to degrees
  headingDegrees = heading * 180/M_PI;
  Serial.println(headingDegrees);
}


void compass_run(int alamat)
{
  kelebihan = 0;
  EEPROM.get(alamat,arah);
  if(sesi==3){ arah = arah+20;}
  if(sesi==2){ arah = arah-15;}
  while(1)
  {
 // pos = arah;
  input = (double)arah;
  norm = compass.readNormalize();

  // Calculate heading
  float heading = atan2(norm.YAxis, norm.XAxis);

  // Set declination angle on your location and fix heading
  // You can find your declination on: http://magnetic-declination.com/
  // (+) Positive or (-) for negative
  // For Bytom / Poland declination angle is 4'26E (positive)
  // Formula: (deg + (min / 60.0)) / (180 / M_PI);
  float declinationAngle = (4.0 + (26.0 / 60.0)) / (180 / M_PI);
  heading += declinationAngle;

  // Correct for heading < 0deg and heading > 360deg
  if (heading < 0)
  {
    heading += 2 * PI;
  }

  if (heading > 2 * PI)
  {
    heading -= 2 * PI;
  }

  // Convert to degrees
  headingDegrees = heading * 180/M_PI; 
  //myPID.run();
  if ((headingDegrees-input)>= 180){kelebihan = 1;}
  if ((headingDegrees-input)<= -180){kelebihan = 2;}
  // Output
//  float respon = hitungPID(input,headingDegrees);
//  if (respon<1){respon = 0;}
//  if (respon>180){respon = 180;}
  if(kelebihan == 1)
  {
    while(1)
    {
    putar_kanan(30,30,30);
    compass_read();
    if(headingDegrees<=10){kelebihan=0; break;}
    }
  }
  if(kelebihan == 2)
  {
    while(1)
    {
    putar_kiri(30,30,30);
    compass_read();
    if(headingDegrees>=340){kelebihan=0; break;}
    }
  }
  if(kelebihan == 0)
  {
  myPID.run();
  Serial.print(" Heading = ");
  Serial.print(kelebihan);
  Serial.print(" Degress = ");
  Serial.print(headingDegrees);
  Serial.print(" PID = ");
  Serial.print(outputVal);
  Serial.println();
  Serial.println(pos);
  pos = outputVal*-10;
  int cok = headingDegrees;
  print_cursor(0,0,cok);
  if (pos <-50){pos = -50;}
  if (pos >50){pos =50;}
  if ((pos<=2) && (pos>=-2)){siap(); break;}
  if (pos<0){ putar_kiri(pos,pos,pos);}
  if (pos>0){ putar_kiri(pos,pos,pos);}

}}
beep(1);
}
