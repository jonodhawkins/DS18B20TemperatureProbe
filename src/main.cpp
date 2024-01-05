#include <Arduino.h>
#include <DS18B20.h>

/*

  2024-01-05 - J.D. Hawkins (hawkinsj22@cardiff.ac.uk)
  Cryosphere and Hydrology Laboratory, 
  EARTH, 
  Cardiff University

  Skeleton example for DS18B20 temperature probe

*/

// Init probe object
DS18B20 ds(PIN_A2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Get value from sensor and print to serial
  // Serial.println("Attempting read temperature...");
  while (ds.selectNext()) {
    Serial.println(ds.getTempC());
  }
  delay(100);
}
