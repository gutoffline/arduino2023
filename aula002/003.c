// Variáveis
int LedVermelho = 13;
int tempo = 0;

void setup()
{
    pinMode(LedVermelho, OUTPUT);
}

void loop()
{
    tempo = tempo + 10;
    digitalWrite(LedVermelho,1);
    delay(tempo);
    digitalWrite(LedVermelho,0);
    delay(tempo);
}