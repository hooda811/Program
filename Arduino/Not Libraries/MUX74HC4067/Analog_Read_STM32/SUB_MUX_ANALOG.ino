void SUB_MUX_ANALOG(){
    int data;

  for (byte i = 0; i < 16; ++i)
  {
    data = mux.read(i);

    Serial.print("Channel ");
    Serial.print(i);
    Serial.print(" di ");
    Serial.print((double)(data) * 100 / 1023);
    Serial.println("%");
    delay(1500);
  }
}
