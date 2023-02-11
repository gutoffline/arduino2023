/*
LDR
O led acende quando o sensor LDR estiver com valor menor do que 500
*/

int ldr = A0;
int valor = 0;
int led = 11;

void setup(){
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    valor = analogRead(ldr);
    Serial.println(valor);

    if(valor < 500){
        digitalWrite(led,1);
    }else{
        digitalWrite(led,0);
    }

    delay(1000);
}

