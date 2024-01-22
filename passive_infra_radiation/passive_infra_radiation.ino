const int ledpin = 13;
const int pirPin = 12;
int pirStatus = 0;




void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
 pirStatus = digitalRead (pirPin);
  if
  {
    pirPin==HIGH
  digitalWrite(ledpin, HIGH);
    Serial.println("Detector is ready ");
    delay(1000);
  }
  else
  {
    digitalWrite(ledpin, LOW);
    Serial.println("Detector is not ready");
    delay(1000);
  }
  // put your main code here, to run repeatedly:

}
