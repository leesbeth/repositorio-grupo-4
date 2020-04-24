const int firstLed = 3;
const int secondLed = 5;
const int thirdLed = 6;
int brightness = 0;
int increment = 1;
void setup(){
// pins analogWrite no necesitan declararse como outputs
}
void loop(){
if(brightness > 255){
increment = 1;
}
else if(brightness < 1){
increment = -1;
}

 brightness = brightness + increment;
analogWrite(firstLed, brightness);
analogWrite(secondLed, brightness);
analogWrite(thirdLed, brightness );
delay(10);
}
