

int lm35_pin = A0, leitura_lm35 = 0;
float temperatura;



void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  leitura_lm35 = analogRead(lm35_pin);
  temperatura = leitura_lm35 * (5.0/1023) * 100;
  Serial.println(temperatura);
  Serial.print(";");
}
