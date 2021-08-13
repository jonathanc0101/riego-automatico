
#include <LM35.h>

const int termometro = A5;
LM35 sensorTemperatura(termometro);
double valorT1 ;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(termometro, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  valorT1 = sensorTemperatura.getTemp(CELCIUS);
  
  Serial.print("termometro: ");
  Serial.println(sensorTemperatura.getTemp(CELCIUS));
  
  

  
}
