const int pinEntradaEsp = 11;
const int pinSalidaBomba1 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinEntradaEsp, INPUT);
  pinMode(pinSalidaBomba1, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinEntradaEsp) == 1){
    digitalWrite(pinSalidaBomba1, HIGH);
  }else{
    digitalWrite(pinSalidaBomba1, LOW);
  }
}
