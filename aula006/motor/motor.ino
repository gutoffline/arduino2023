/*
Liga motor
*/

int motor = 11;

void setup(){
    pinMode(motor, OUTPUT);
}

void loop(){
    digitalWrite(motor, 255);
}