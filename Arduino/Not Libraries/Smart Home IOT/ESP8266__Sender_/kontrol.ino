void kontrol(){
if (Firebase.getString(firebaseData, "/kontrol")) { //misal database diberikan nama relay1
    if  (firebaseData.dataType() == "string") 
    {
      String FBStatus = firebaseData.stringData();
      if (FBStatus == "11") {                                                         
      Serial.println("Fan ON");
      komunikasi.write("1");   
      Serial.println("1");
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "22") {                                                         
      Serial.println("Fan OFF");
      komunikasi.write("2");   
      Serial.println("2");
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "33") {                                                         
      Serial.println("DOOR ON");
      komunikasi.write("3");   
      Serial.println("3");
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "44") {                                                         
      Serial.println("DOOR OFF");
      komunikasi.write("4");   
      Serial.println("4");
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "55") {                                                         
      Serial.println("DAFTAR FINGERPRINT OFF");   
      daftar_off();
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "66") {                                                         
      Serial.println("DAFTAR FINGERPRINT ON"); 
      setup();
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "67") {                                                         
      Serial.println("SIGN UP"); 
      daftar_on_setup();
      daftar_on();
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "77") {                                                         
      Serial.println("LAMP ON");
      komunikasi.write("7");   
      Serial.println("7");
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
      if (FBStatus == "88") {                                                         
      Serial.println("LAMP OFF");
      komunikasi.write("8");   
      Serial.println("8");
      delay(50);
      Firebase.deleteNode(firebaseData, "/kontrol");
      }
    }
  }
}
