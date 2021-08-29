void button1(){
buttonstate = digitalRead(button);

  if (buttonstate == LOW)
  {
    for (int x = 0; x < 180; x++)
    {
      sinVal = (sin(x * (3.1412 / 180)));
      toneVal = 2000 + (int(sinVal * 1000));
      tone(buzzer, toneVal);
      delay(400);
      noTone(buzzer);
      break;
    }
    counter++;
    delay(100);
  }

  if (counter == 0)
  {
    myservo1.write(340);
  //  myservo2.write(0);
  }

  else if (counter == 1)
  {
    myservo1.write(0);
  //  myservo2.write(130);
  }
  else
  {
    counter = 0;
  }
}
