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
uint16_t time;

void setup() {
  Serial.begin(9600);
}


void loop() {
  // Get value from sensor and print to serial
  // Serial.println("Attempting read temperature...");
  while (ds.selectNext()) {
    ds.setResolution(12);
  time = millis();
    Serial.print(ds.getTempC());
  time = millis() - time;
  }
  Serial.print(" in ");
  Serial.print(time);
  Serial.println(" ms");
  delay(100);
}
