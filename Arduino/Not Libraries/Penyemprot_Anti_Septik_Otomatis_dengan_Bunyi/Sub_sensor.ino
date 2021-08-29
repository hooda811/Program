void Sensor2 () {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance - (duration/2) / 29.1;
  Serial.println(distance);

  if(distance <= 9) {
    if(lockLow) {
      lockLow = false;
      Serial.println("Motion detected");
      digitalWrite(isd, HIGH);
      digitalWrite(isd, LOW);
      digitalWrite(relay, LOW);
      delay(200);
      digitalWrite(relay, HIGH);
    }
    takeLowTime = true;
  }
  if(distance >= 10 || distance <= 0) {
    if(takeLowTime) {
      lowIn = millis();
      takeLowTime = false;
    }
    if(!lockLow && millis() - lowIn > pause) {
      lockLow = true;
      Serial.println("Motion ended");
      digitalWrite(relay, HIGH);
    }
  }
  
  delay(500);
}
