/*
Liga motor e controla velocidade pelo potenciometro
*/
int motor = 11;
int potenciometro = A0;
int valor = 0;
int valor_convertido = 0;

void setup(){
    pinMode(motor, OUTPUT);
}

void loop(){
    valor = analogRead(potenciometro);
    valor_convertido = map(valor, 0, 1023, 0, 255);
    analogWrite(motor, valor_convertido);
}