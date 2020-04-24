const int switchPin = 2;
long startTime;
long duration;
void setup(){
pinMode(switchPin, INPUT);
digitalWrite(switchPin, HIGH);
Serial.begin(9600);
}
void loop()
{
if(digitalRead(switchPin) == LOW)
{
startTime = millis();
while(digitalRead(switchPin) == HIGH){}
long duration = millis() - startTime;
Serial.println(duration);
}
}
