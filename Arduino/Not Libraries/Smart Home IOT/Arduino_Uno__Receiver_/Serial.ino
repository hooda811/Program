// Serial ESP8266 to Arduino Uno
// Serial include door, fan, and lamp

void serialkomunikasi(){
if(komunikasi2.available()){
  char datakom = komunikasi2.read();
  Serial.println(datakom);
  // DOOR
  if(datakom == '1'){
    Serial.println("FAN ON");
    analogWrite(fan1, HIGH);
  }
  if(datakom == '2'){
    Serial.println("FAN OFF");
    analogWrite(fan1, LOW);
  }
  if(datakom == '3'){
    Serial.println("DOOR ON");
    buka1();
  }
  if(datakom == '4'){
    Serial.println("DOOR OFF");
    tutup1();
  }
  if(datakom == '7'){
    Serial.println("LAMP ON");
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, HIGH);
  }
  if(datakom == '8'){
    Serial.println("LAMP OFF");
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
  }
  if(datakom == '9'){
    Serial.println("TERDETEKSI SIDIK JARI");
    buka1();
    Serial.println("Servo 2 Terbuka");
  }
  if(datakom == '10'){
    Serial.println("TERDETEKSI SIDIK JARI");
    tutup1();
    Serial.println("Servo 2 Tertutup");
  }
}
}
void buka1() 
{
  myservo2.write(0);
}

void tutup1()
{
  myservo2.write(130);
}

void servo2a()
{

  if (counter == 0)
  {
    myservo2.write(0);
  }

  else if (counter == 1)
  {
    myservo2.write(130);
  }
  else
  {
    counter = 0;
  }
}
