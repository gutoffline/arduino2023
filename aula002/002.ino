/* Piscar um Led personalizado
*/
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2,OUTPUT);
}

void loop()
{
  //Piscar led vermelho
  digitalWrite(13, 1);
  delay(1000);
  digitalWrite(13, 0);
  delay(1000);

  //piscar led azul
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
  delay(1000);

  //piscar led verde
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  delay(1000);
}