/*
Acender um LED de acordo com o valor do potenciôemtro
*/

int valor = 0;
int led = 11;

void setup(){
    pinMode(led, OUTPUT);
    Serial.begin(9600);
    Serial.println("início");
}

void loop(){
    valor = analogRead(A0);
    Serial.print("Valor = ");
    Serial.println(valor);

    if(valor > 500){
        digitalWrite(led, 1);
    }else{
        digitalWrite(led, 0);
    }
    delay(100);
}