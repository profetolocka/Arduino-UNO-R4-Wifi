/*
 Pruebas de la matriz led de la UNO R4 Wifi usando Bitmaps
 En este ejemplo se usa el método renderBitmap con arreglos bidimensionales

 Primero se debe cargar la librería "Arduino_LED_Matrix.h"
 A continuación se debe instanciar un objeto de la clase ArduinoLEDMatrix
 Cada cuadro o pantalla se puede definir como un arreglo bidimensional de 8x12 bits
 El cuadro se muestra en el display empleando el método renderBitmap (cuadro, 8,12);
 Este método no es muy eficiente porque usa mucha memoria, la info de cada led requiere de 1 byte
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

uint8_t corazon [8][12] = {
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,1,0,1,1,0,0,0,0},
    {0,0,1,0,0,0,0,0,1,0,0,0},
    {0,0,1,0,0,0,0,0,1,0,0,0},
    {0,0,0,1,0,0,0,1,0,0,0,0},
    {0,0,0,0,1,0,1,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0},
};

void setup() {

  Pantalla.begin();
}

void loop() {

  Pantalla.renderBitmap (corazon, 8,12);
  delay (500);
  

  
}