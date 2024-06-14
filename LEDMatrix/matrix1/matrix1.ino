/*
 Pruebas de la matriz led de la UNO R4 Wifi
*/

#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix Pantalla;  //Instancia objeto

byte frame [8][12] = {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
};

void setup() {

  pinMode (LED_BUILTIN, OUTPUT);

  Pantalla.begin();
  Pantalla.renderBitmap (frame, 8,12);
}

void loop() {

  digitalWrite (LED_BUILTIN, HIGH);
  delay (500);
  digitalWrite (LED_BUILTIN, LOW);
  delay (500);

  
}