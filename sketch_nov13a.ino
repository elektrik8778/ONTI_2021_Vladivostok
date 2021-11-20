#include <SoftwareSerial.h>

#define rxPin 10
#define txPin 11

SoftwareSerial mySerial(rxPin, txPin); // RX, TX
char myChar ; 
bool led = false;
void setup() {
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);   
  //Serial.println("Goodnight moon!");

  mySerial.begin(9600);
  //mySerial.println("Hello, world?");
}

void loop(){
  if (led==true){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
  while(mySerial.available()){
    myChar = mySerial.read();
   //Serial.print(myChar);
   if (myChar == "S") {
    Serial.print("S");
    blink_();
   }
  }
   

  while(Serial.available()){
   myChar = Serial.read();
   mySerial.print(myChar);
  }
}
void blink_(){
  led = !led;
}
