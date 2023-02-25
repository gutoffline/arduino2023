// funções
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
    ControleVermelho();
    ControleAmarelo();
    ControleVerde();
}

void ControleVermelho(){
    digitalWrite(LedVermelho,1);
    delay(tempo);
    digitalWrite(LedVermelho,0);
    delay(tempo);
}

void ControleAmarelo(){
    digitalWrite(LedAmarelo,1);
    delay(tempo);
    digitalWrite(LedAmarelo,0);
    delay(tempo);
}

void ControleVerde(){
    digitalWrite(LedVerde,1);
    delay(tempo);
    digitalWrite(LedVerde,0);
    delay(tempo);
}