int led = 13;
int botao = 5;
int estado_do_botao = 0;

void setup(){
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT_PULLUP);

    Serial.begin(9600);
    Serial.println("Começou");
}

void loop(){
    estado_do_botao = digitalRead(botao);
  	if(estado_do_botao == 0){
        if(digitalRead(led) == 1){
          digitalWrite(led,0);  
        }else{
            digitalWrite(led,1);
        }
        
    	//digitalWrite(led, !digitalRead(led));
      	delay(50);
    }
    delay(50);
}