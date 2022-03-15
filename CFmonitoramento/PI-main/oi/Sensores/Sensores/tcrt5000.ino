int switch_pin = 7;




void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(switch_pin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(switch_pin) == LOW){
    Serial.println(1);
  }
  else {
    Serial.println(0);
  }
 delay(2000);
}
