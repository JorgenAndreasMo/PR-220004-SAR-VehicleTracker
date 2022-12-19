#include <Arduino.h>

// Including 
#include "GPS.h"
#include "Peripherals.h"

GPS gps(true);
Peripherals per;

void setup() {

  int lat = per.GPS.date.day();
  int id =  per.NFC.uid.uidByte[0];
  
  
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}