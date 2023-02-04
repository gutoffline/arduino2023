int led_verde = 11;
String comando = "Vamos acender um led";
int numero = 0;

void setup() {
  pinMode(led_verde, OUTPUT);
  Serial.begin(9600);
  Serial.println(comando);
  Serial.println("Vai comecar");
}

void loop() {
  digitalWrite(led_verde, 1);
  Serial.println("Led aceso");
  delay(200);
  digitalWrite(led_verde, 0);
  Serial.println("Led apagado");
  delay(200);
  numero = numero + 1;
  Serial.println(numero);

  if(numero == 10){
    digitalWrite(led_verde,1);
    delay(2000);
    numero = 0;
  }

}
