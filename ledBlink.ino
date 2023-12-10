int ledPin = 13;
int ledPin2 = 24;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPIn2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, LOw);
  delay(500);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin, LOW);
  delay(500);
  
}
