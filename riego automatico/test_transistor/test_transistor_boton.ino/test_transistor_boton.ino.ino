
const int pinAnalogo = A5;
const int pinDigital = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode(pinDigital, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  digitalWrite(pinDigital, HIGH);
  delay(1000);
  digitalWrite(pinDigital,LOW);
}
