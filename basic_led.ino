int ledPin = 10;


void setup (){
  pinMode (ledPin, OUTPUT);
  
}

void loop(){
  digitalWrite(ledPin, HIGH);
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(2000);

  for (int i=0; i<5; i++){
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}
