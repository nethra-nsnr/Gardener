pinMode(in1, OUTPUT);
  digitalWrite(in1, HIGH);
  //pinMode(enPin,OUTPUT);
  //digitalWrite(enPin,LOW);
  
}

void loop() {{
  digitalWrite(in1, LOW);
  delay(5000);
  digitalWrite(in1, HIGH);
  delay(5000);
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  for(int x = 0; x < 900; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2000); 
  }
  delay(4000); // One second delay
  digitalWrite(dirPin,LOW); //Changes the direction of rotation
  for(int x = 0; x < 900; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(2000);
  }
  delay(1000); 
}
 delay(10000);
}