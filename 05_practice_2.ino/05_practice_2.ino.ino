#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);

}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  
  digitalWrite(PIN_LED, LOW);  // LED 끄기
  delay(100);   
  digitalWrite(PIN_LED, HIGH);  // LED 끄기
  delay(100);
  digitalWrite(PIN_LED, LOW);  // LED 끄기
  delay(100);   
  digitalWrite(PIN_LED, HIGH);  // LED 켜기
  delay(100);
  digitalWrite(PIN_LED, LOW);  // LED 끄기
  delay(100);   
  digitalWrite(PIN_LED, HIGH);  // LED 켜기
  delay(100);
  digitalWrite(PIN_LED, LOW);  // LED 끄기
  delay(100);   
  digitalWrite(PIN_LED, HIGH);  // LED 켜기
  delay(100);
  digitalWrite(PIN_LED, LOW);  // LED 끄기
  delay(100);   
  digitalWrite(PIN_LED, HIGH);  // LED 켜기
  delay(100);
  
  digitalWrite(PIN_LED, LOW);  // LED 끄기

  while(1){
    
    
 }
}
