 #define PIN_LED 13
unsigned int count, toggle;
 
 void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;//wait for serial port to connect.
  }
  Serial.println("Hello, World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);

}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int toggle_state(int toggle) {
  if (toggle==0){
    return 1;
  }
  else{
  return 0;
  }
}

//code 04P9
