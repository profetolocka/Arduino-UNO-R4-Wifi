/*
 Pruebas de la matriz led de la UNO R4 Wifi usando enteros de 32 bits
 Es una forma mas eficiente de almacenar la informacion de la matriz
 Para facilitar la conversión se puede usar esta página:
 https://www.manualdomaker.com/matrix/
 
*/

#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix Pantalla;  //Instancia un objeto de la clase Arduino_LED_Matrix


unsigned long corazon1 [] = {
    0x1B024,
    0x82082081,
    0x100A0040
};

unsigned long corazon2 [] = {
    0x1B03F,
    0x83F83F81,
    0xF00E0040,
};



void setup() {
  // put your setup code here, to run once:

  Pantalla.begin ();

}

void loop() {
  // put your main code here, to run repeatedly:

  Pantalla.loadFrame (corazon1);
  delay (500);
  Pantalla.loadFrame (corazon2);
  delay (500);

}
