#include <DHT11.h>
int pin=2;
DHT11 dht11(pin); 
void setup() {
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);
  
  Serial.begin(9600);
  Serial1.begin(9600); 
}

void loop() {
  int err;
  float temp, humi;
  if((err=dht11.read(humi, temp))==0)
  char c;
  
 
  Serial.print("temperature:");
  Serial.print(temp);
  Serial.print(" humidity:");
  Serial.print(humi);
  Serial.println();
    
  Serial1.println("temperature");
  Serial1.println(temp);
  Serial1.println(" humidity");
  Serial1.println(humi);
    
  if(temp<28)
  {
    digitalWrite(3, HIGH);
  }
  if(temp>=29)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  if(temp>=30)
  {  
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }
  if(temp>=31)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  if(temp>=32)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }
  delay(1500);
}
