void setup() {
   Serial.begin(9600);
}

void loop() {
  if(Serial.available())  {
    byte value = Serial.read();

    if(value == 0x12)  {
      Serial.println('Hello! I received code 0x12)
    }
  }
  delay(100);
}
