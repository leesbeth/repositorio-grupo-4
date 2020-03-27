
//servo motor
int c=8;
int a=2;
int b=9;
int h=3;
long tiempo=0;
int estado1=LOW;
int estado=LOW;
int state=HIGH;


//la simulacion de los sensores de temperatura y de humedad lo hicimos con la LDR porque no tenemos sensores de calor

//sensores
int temperatura=4;  //la temperatura se cambiara de acuerdo a la especie que se desea incubar las siguientes especificaciones de temperatura y humedad son las de huevos de gallina  
int temperatura1=3;   //este pin3 es analogo por si alguna confusion
int humedad= 5;   //la humedad se mide en un por ciento los huevos se debe de mantener a un 58-60% que en grados celsius es de 28.8-30grados celsius
int bombilla1=13;  
int bombilla2=12;
int ledhumedad=11;

//volor de las variables
int temperatura_val =0;
int temperatura1_val =0;
int humedad_val =0;




void setup() {
  // put your setup code here, to run once:
pinMode(bombilla1, OUTPUT);
pinMode(bombilla2, OUTPUT);
pinMode(ledhumedad, OUTPUT);


//configuracion del servo motor
pinMode(c, OUTPUT);
pinMode(b, OUTPUT);
pinMode(h, OUTPUT);
Serial.begin(9600);

pinMode(a, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(a),rotor,CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:



temperatura_val = analogRead (temperatura);
temperatura1_val = analogRead (temperatura1);
humedad_val = analogRead (humedad);
 
 
 if (temperatura_val < 350){

     digitalWrite(bombilla1,HIGH);

 }else {

   digitalWrite(bombilla1,LOW);

 }


 
   

if (temperatura1_val < 350){

     digitalWrite(bombilla2,HIGH);

 }else {

   digitalWrite(bombilla2,LOW);

 }


 if (humedad_val < 350){

     digitalWrite(ledhumedad,LOW);

 }else {

   digitalWrite(ledhumedad,HIGH);

 }




 digitalWrite(h, HIGH);
delay(2000);
  digitalWrite(h, LOW);
 delay(2000); 
 
}


void rotor(){

  
   digitalWrite(b,estado1); 
    digitalWrite(c,estado);
  
  if(state){
    estado1=!estado1;
    estado=LOW;
    Serial.print(" cerro la puerta   ");
  }else{
    estado=!estado;
    estado1=LOW;
    Serial.print(" abrio la puerta   ");
  }
  state=!state;
  tiempo=millis();
}
