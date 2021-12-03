byte enR = 6;
byte in1 = 5;
byte in2 = 4;
byte in3 = 3;
byte in4 = 2;
byte enL = 9;
byte power = 90;
 
void setup() {
  pinMode( enR, OUTPUT );
  pinMode( in1, OUTPUT );
  pinMode( in2, OUTPUT );
  pinMode( enL, OUTPUT );
  pinMode( in3, OUTPUT );
  pinMode( in4, OUTPUT );
  analogWrite( enR, power );
  analogWrite( enL, power );
  
}
  

void loop() {
  //forward_();
  //stop_();
  //backward_();
  //left_();
  //right_();
  
}
void forward_() {
  analogWrite( enR, power );// ваше действие
  analogWrite( enL, power );
  digitalWrite( in1, LOW );
  digitalWrite( in2, HIGH );
  digitalWrite( in3, LOW );
  digitalWrite( in4, HIGH );
  
  
}
 
void backward_() {
  analogWrite( enR, power );// ваше действие
  analogWrite( enL, power );
  digitalWrite( in1, HIGH );
  digitalWrite( in2, LOW);
  digitalWrite( in3, HIGH );
  digitalWrite( in4, LOW );
}
 
void stop_() {
  analogWrite( enR, 0 );// ваше действие
  analogWrite( enL, 0 );
}
 
void left_() {
  analogWrite(enR,power );//ваше действие
  analogWrite(enL,power );
  digitalWrite(in1, HIGH );
  digitalWrite(in2, LOW );
  digitalWrite(in3, LOW );
  digitalWrite(in4, HIGH );
}
 
void right_(){
  analogWrite(enR,power );//ваше действие
  analogWrite(enL,power );
  digitalWrite(in1, LOW );
  digitalWrite(in2, HIGH );
  digitalWrite(in3, HIGH );
  digitalWrite(in4, LOW );
}
 
