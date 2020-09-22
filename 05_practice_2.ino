unsigned int count, toggle;
int led = 7;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200); //initialize serial port
  while(!Serial){
    ;
  }
  count = 0;
  digitalWrite(led, 0);
  delay(1000);
}

void loop() {
  Serial.println(++count);
  digitalWrite(led, 1);
  delay(100);
  digitalWrite(led, 0);
  delay(100);
  if(count == 5){
    digitalWrite(led, 1);
    while(1) {
      ;
    }
  }
}
