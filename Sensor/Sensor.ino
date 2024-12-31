int irSensorPin=34;
int ledPin=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(irSensorPin);

  if (sensorValue == LOW){
    Serial.println("Object detected!");
    digitalWrite(ledPin, HIGH);

  }else{
    Serial.println("No object detected.");
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
