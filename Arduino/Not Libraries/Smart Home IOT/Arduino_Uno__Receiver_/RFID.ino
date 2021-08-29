void rfid1(){
    if (rfid.isCard())
  {
    if (rfid.readCardSerial())
    {
      Serial.print("Found ID: ");
      Serial.print(rfid.serNum[0]);
      Serial.print(",");
      Serial.print(rfid.serNum[1]);
      Serial.print(",");
      Serial.print(rfid.serNum[2]);
      Serial.print(",");
      Serial.print(rfid.serNum[3]);
      Serial.print(",");
      Serial.println(rfid.serNum[4]);
    }

    bool validated = false;

    for (int x = 0; x < 4; x++) 
    {
      if (rfid.serNum[0] == kartu[x][0] && rfid.serNum[1] == kartu[x][1] && rfid.serNum[2] == kartu[x][2] && rfid.serNum[3] == kartu[x][3] && rfid.serNum[4] == kartu[x][4]) 
      {
        validated = true;
      }
    }

    if (validated)
    {
      card = true;
    }
    else
    {
      card = false;
    }

    if (card == true)
    {
      Serial.println("Correct Card");
      //digitalWrite(LED_1, HIGH);
      //digitalWrite(LED_2, LOW);
      //delay(500);
      //digitalWrite(LED_2, LOW);
      for (int x = 0; x < 180; x++)
      {
        sinVal = (sin(x * (3.1412 / 180)));
        toneVal = 2000 + (int(sinVal * 1000));
        tone(buzzer, toneVal);
        delay(300);
        noTone(buzzer);
        break;
      }

      if (counter == 0)
      {
        counter = 1;
      }
      else
      {
        counter = 0;
      }
    }
    
    else
    {
      Serial.println("Wrong Card");
      delay(500);
      /*digitalWrite(LED_1, LOW);
        digitalWrite(LED_2, HIGH);
        for(int x=0; x<180; x++)
        {
          sinVal = (sin(x*(3.1412/180)));
          toneVal = 2000+(int(sinVal*1000));
          tone(buzzer, toneVal);
          delay(1000);
          break;
        }
        noTone(buzzer);*/
    }
    rfid.halt();
  }
}
