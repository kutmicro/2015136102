void setup() {
  //define 2 serial port
  Serial.begin(9600);
  Serial1.begin(9600); 

}

void loop() {
  char c;
  //the IDE send,phone receive
  if (Serial.available()) {
    c = Serial.read();
     Serial1.print(c);
  }
  //the phone send ,IDE receive
  if (Serial1.available()) {
    c = Serial1.read();
    Serial.print(c);
  }
}

