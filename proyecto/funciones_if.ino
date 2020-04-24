const int ledPin = 13;
const int inputPin = 2;
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(inputPin, INPUT);
digitalWrite(ledPin, HIGH);
Serial.begin(9600);
}
void loop(){
int val = digitalRead(inputPin);
if (val == HIGH){
  delay(3000);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(2000);
Serial.print("prendio");
}
else {
  delay(1000);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(500);
digitalWrite(ledPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
delay(1000);
Serial.print("apago");
}
}
