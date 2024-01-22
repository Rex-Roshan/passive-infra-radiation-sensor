#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int sensorPin=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin,INPUT);
 lcd.begin(16,2);
 lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue=digitalRead(sensorPin);

  if(sensorValue==HIGH)
  {
 lcd.print("Detected");
 lcd.setCursor(0,0);
    delay(3000);
    Serial.println("Movement detected");
  }
  else{
lcd.print("Not Detected");
lcd.setCursor(0,1);
    delay(3000);
    Serial.println("No movement detected");
  }
  //delay(1000);
}
