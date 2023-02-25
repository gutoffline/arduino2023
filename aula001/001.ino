// Piscar um led
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // nessa linha onde acendo o led
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
}