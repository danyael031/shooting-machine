
const int ledPin = 9;

void setup() {
  pinMode(ledPin , OUTPUT);  //definir pin como salida
  Serial.begin(9600);
    while (!Serial){;}
}
 
void loop(){
  digitalWrite(ledPin , HIGH);   // poner el Pin en HIGH
  delay(1000);                   // esperar un segundo
  digitalWrite(ledPin , LOW);    // poner el Pin en LOW
  delay(1000);                   // esperar un segundo

  
  Serial.write("hola mundo!\n") ;
}
