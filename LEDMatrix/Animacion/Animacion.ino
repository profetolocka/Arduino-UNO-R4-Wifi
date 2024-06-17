/*
 Ejemplo de animacion.
 La secuencia de frames de la animacion fue hecha con la aplicacion LED Matrix Editor
 https://labs.arduino.cc/en/labs/led-matrix y guardada como "pelota.h"
*/

#include "Arduino_LED_Matrix.h"
#include "pelota.h"

ArduinoLEDMatrix pantalla;  //Instanciar objeto

void setup() {

  pantalla.begin ();
  pantalla.loadSequence (pelota);
  pantalla.play (true);

}

void loop() {
  // put your main code here, to run repeatedly:

}
