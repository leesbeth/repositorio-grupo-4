const int ldrPin = 0;
const int ledPin = 13;
int val = 0;
void setup()
{
pinMode(ledPin, OUTPUT);
}
void loop() {
val = analogRead(ldrPin);
val = constrain(val, 600 , 800)*10;
digitalWrite(ledPin, HIGH);
delay(val);
digitalWrite(ledPin, LOW);
delay(val);
}
