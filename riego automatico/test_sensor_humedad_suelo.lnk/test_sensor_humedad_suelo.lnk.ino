
const int pinAnalogo = A5;
const int pinDigital = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  
  int valorPinAnalogo = analogRead(pinAnalogo);
  int valorPinDigital = digitalRead(pinDigital);
  
  // put your main code here, to run repeatedly:
  Serial.println("pin analogo: ");
  Serial.println(valorPinAnalogo);
  Serial.println("pin digital: ");
  Serial.println(valorPinDigital);
  
  delay(200);
}
