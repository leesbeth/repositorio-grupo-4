void setup() {
Serial.begin(9600);
}
void loop(){
//Serial.println("for(int i=0; i < 4; i++)");
for(int i=0; i < 64; i++){
  delay(1000);
Serial.println(i*4);
}
}
