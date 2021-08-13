#include <Arduino.h>

/* Include this library */
#include "Segment.h"
#include "Digit.h"
#include "Display.h"
#include <stdlib.h>
#include <LM35.h>


const byte digit_pins[4] {6, 9, 10, 12}; // From com1 - com4
const byte segment_pins[7] {7, 11, 2, 4, 5, 8, 13}; // From a - g (abc...g)
const byte dp_pin = 3;

const int pinSensorTemperatura = A5;
LM35 sensorTemperatura(pinSensorTemperatura);

Display d(digit_pins, segment_pins, dp_pin);

float val;

void setup() {
  Serial.begin(9600);
  
  for (int i = 0; i <= A0; i++) {
    pinMode(i, OUTPUT);
  }

   pinMode(pinSensorTemperatura, INPUT);
}

void loop() {
  val = sensorTemperatura.getTemp(CELCIUS);;
  char buff[10];
  
  dtostrf(val, 4, 6, buff);  //4 is mininum width, 6 is precision
  for(int i = 0; i < 10; i++){
    d.print(buff); // Must be looped!
    delay(10);
  }
}
