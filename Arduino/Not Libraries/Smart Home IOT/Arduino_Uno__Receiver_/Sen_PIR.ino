void PIR_s()
{
  val = digitalRead(pir);   // read sensor value
  if ((val == HIGH) && (state == LOW)) {        // check if the sensor is HIGH
    digitalWrite(LED_1, HIGH);   // turn LED ON
    //delay(1000);
    Serial.println("Motion detected!"); 
    state = HIGH;
    delay(700);
    //digitalWrite(buzzer, HIGH);
    //delay(1000);                // delay 100 milliseconds 
  }
  
  else {
    if ((val == LOW) && (state == HIGH)) {
      digitalWrite(LED_1, LOW); // turn LED OFF
      //delay(1000);
      Serial.println("Motion stopped!");
      state = LOW;
      delay(700);
      //digitalWrite(buzzer, LOW);
      //delay(2000);             // delay 200 milliseconds
    }
  }
}
