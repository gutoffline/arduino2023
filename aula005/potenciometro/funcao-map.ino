/*
Acender um led proporcional ao potenciometro
*/

int led = 11;
int valor = 0;
int valor_mapeado = 0;

void setup(){
    pinMode(led, OUTPUT);
}

void loop(){
    valor = analogRead(A0);
    valor_mapeado = map(valor, 0, 1023, 0,255);
    // map(potenciometro, inicio pot, fim pot, inicio led, fim led)
    analogWrite(led, valor_mapeado);
    delay(100);
}