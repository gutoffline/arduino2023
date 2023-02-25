// Variáveis e Constante
#define LedVermelho 13
int tempo = 10000;

void setup()
{
    pinMode(LedVermelho, OUTPUT);
}

void loop()
{
    tempo = tempo - 100;
    digitalWrite(LedVermelho,1);
    delay(tempo);
    digitalWrite(LedVermelho,0);
    delay(tempo);
}
