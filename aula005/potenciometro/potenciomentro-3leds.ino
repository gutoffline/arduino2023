/*
Acender um LED de acordo com o valor do potenciôemtro
*/

int valor = 0;
int led_vermelho = 11;
int led_verde = 10;
int led_azul = 9;

void setup(){
    pinMode(led_vermelho, OUTPUT);
  	pinMode(led_azul, OUTPUT);
  	pinMode(led_verde, OUTPUT);
    Serial.begin(9600);
    Serial.println("início");
}

void loop(){
    valor = analogRead(A0);
    Serial.print("Valor = ");
    Serial.println(valor);

    if(valor < 100){
        leds(0,0,0);
    }else if(valor < 300){
        leds(1,0,0);
    }else if(valor < 800){
      	leds(1,1,0);
    }else{
      	leds(1,1,1);
    }
}


void leds(int led1, int led2, int led3){
  digitalWrite(led_vermelho, led1);
  digitalWrite(led_verde, led2);
  digitalWrite(led_azul, led3);
}