/*
 Pruebas de la matriz led de la UNO R4 Wifi usando Bitmaps

 Primero se debe cargar la librería "Arduino_LED_Matrix.h"
 A continuación se debe instanciar un objeto de la clase ArduinoLEDMatrix
 Cada cuadro o pantalla se puede definnir como un arreglo bidimensional de 8x12 bits
 El cuadro se muestra en el display empleando el método renderBitmap (cuadro, 8,12);
 Este método no es muy eficiente porque usa mucha memoria
*/

#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix Pantalla;  //Instancia objeto

byte frame1 [8][12] = {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
};

byte frame2 [8][12] = {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
};

byte frame3 [8][12] = {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
};

byte frame4 [8][12] = {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
};

void setup() {

  pinMode (LED_BUILTIN, OUTPUT);

  Pantalla.begin();
}

void loop() {

  Pantalla.renderBitmap (frame1, 8,12);
  delay (500);
  Pantalla.renderBitmap (frame2, 8,12);
  delay (500);  
  Pantalla.renderBitmap (frame3, 8,12);
  delay (500);  
  Pantalla.renderBitmap (frame4, 8,12);
  delay (500);

  
}