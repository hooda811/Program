void bunyi(){
  for (int x = 0; x < 180; x++)
      {
        sinVal = (sin(x * (3.1412 / 180)));
        toneVal = 2000 + (int(sinVal * 1000));
        tone(buzzer2, toneVal);
        delay(400);
        noTone(buzzer2);
        break;
      }
}
