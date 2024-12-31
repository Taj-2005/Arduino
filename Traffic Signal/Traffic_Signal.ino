int red=13;
int yellow=27;
int green=25;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH); //led on
  delay(5000);
  digitalWrite(red, LOW);
   //led off
  digitalWrite(yellow, HIGH); //led on
  delay(2000);
  digitalWrite(yellow, LOW);
   //led off
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW); //led off

  digitalWrite(yellow, HIGH); //led on
  delay(2000);
  digitalWrite(yellow, LOW);


}
