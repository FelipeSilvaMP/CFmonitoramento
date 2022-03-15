
#include "DHT.h"
#define dht_type DHT11

int dht_pin = A2;
DHT dht_1 = DHT(dht_pin, dht_type); //pode-se configurar diversos sensores DHTxx




void setup() {
  // put your setup code here, to run once:
  dht_1.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float umidade = dht_1.readHumidity();
  float temperatura = dht_1.readTemperature();
  if (isnan(temperatura) or isnan(umidade)) 
  {
    Serial.println("Erro ao ler o DHT");
  } 
  else
  {
    Serial.println(umidade);
    Serial.print(";");
    Serial.println(temperatura);
    Serial.print(";");
   }
}
