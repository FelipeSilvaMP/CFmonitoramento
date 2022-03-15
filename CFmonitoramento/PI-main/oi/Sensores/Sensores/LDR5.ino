int ldr_pin = A5, leitura_ldr = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

/**
 * Configurações iniciais sobre os sensores
 * DHT11, LM35, LDR5 e TCRT5000
 */
 

}

void loop() {
  // put your main code here, to run repeatedly:

  /**
   * Bloco do LDR5
   */
   
  leitura_ldr = analogRead(ldr_pin);
  Serial.println(leitura_ldr);
  //Serial.print(";");
delay(3000);
}
