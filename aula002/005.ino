// funções com parâmetros
#define LedVermelho 13
#define LedAmarelo 12
#define LedVerde 11
int tempo = 500;

void setup(){
    pinMode(LedVermelho, OUTPUT);
    pinMode(LedAmarelo, OUTPUT);
    pinMode(LedVerde, OUTPUT);
}

void loop(){
    ControleLed(LedVermelho);
    ControleLed(LedVermelho);
    ControleLed(LedAmarelo);
    ControleLed(LedVerde);
}

void ControleLed(int led){
    digitalWrite(led,1);
    delay(tempo);
    digitalWrite(led,0);
    delay(tempo);
}