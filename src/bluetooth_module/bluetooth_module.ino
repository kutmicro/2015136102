#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // SoftwareSerial(RX, TX)

void setup() {
  Serial.begin(9600);
  Serial.println("Goodnight moon!");

  mySerial.begin(9600);
}

void loop() {
  if(mySerial.available()) // if mySerial sends something
    Serial.write(mySerial.read()); // write it to serial

   if(Serial.available()) // if Serial has input
    mySerial.write(Serial.read()); // write it to mySerial
}
