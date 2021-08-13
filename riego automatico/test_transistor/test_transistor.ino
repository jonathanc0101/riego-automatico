
const int pinAnalogo = A5;
const int pinDigital = 2;

int val;
const int topeSuperior = 1024;
const int topeInferior = 129;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinAnalogo, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(val=topeSuperior; val>0; val--)
  {
   analogWrite(pinAnalogo, val);
   delay(1); 
  }
for(val=0; val<topeSuperior; val++)
  {
   analogWrite(pinAnalogo, val );
   delay(1); 
  }
}
