#include "Arduino_LED_Matrix.h"
#include "pelotaRebotando.h"

ArduinoLEDMatrix Pantalla;

void setup() {
  Pantalla.begin();
  Pantalla.loadSequence(pelotaRebotando);
  Pantalla.play(true);
}

void loop() {
}