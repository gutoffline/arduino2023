/*
Botão
Programa aonde você aperta um botão e o led acende
*/

int led = 13;
int botao = 5;

int estado_do_botao = 0;

void setup(){
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT);

    Serial.begin(9600);
    Serial.println("Começou");
}

void loop(){
    estado_do_botao = digitalRead(botao);
    Serial.println(estado_do_botao);

    digitalWrite(led, estado_do_botao);
    
    delay(300);
}