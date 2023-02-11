/*
Acender Led Monitor
Acender um led pelo monitor serial, se aperta a tecla A acende, se apertar a tecla B apaga
*/

int led_vermelho = 11;
String comando = "Vamos acender um LED";

void setup(){
    pinMode(led_vermelho, OUTPUT);
    Serial.begin(9600);
    Serial.println(comando);
}

void loop(){
    if(Serial.available()){
        switch(Serial.read()){
            case 'A':
                digitalWrite(led_vermelho,1);
                Serial.println("Led Aceso");
                break;
            case 'B':
                digitalWrite(led_vermelho, 0);
                Serial.println("Led Apagado");
                break;
        }
    }
}