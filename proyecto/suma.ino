int a = 8;
int b = 8;
int resp = 0;
void setup() {
Serial.begin(9600);
}
void loop() {
Serial.print("La respuesta es: ");
resp= a + b;
Serial.println(resp);
delay(500);
}
