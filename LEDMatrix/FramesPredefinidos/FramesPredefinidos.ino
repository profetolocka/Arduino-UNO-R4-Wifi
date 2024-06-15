/*
 Pruebas de la matriz led de la UNO R4 Wifi usando enteros de 32 bits
 En este ejemplo se muestran los frames que ya están predefinidos
*/

#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix Pantalla;  //Instancia un objeto de la clase Arduino_LED_Matrix


void setup() {
  // put your setup code here, to run once:

  Pantalla.begin ();

}

void loop() {
  // put your main code here, to run repeatedly:

  Pantalla.loadFrame (LEDMATRIX_BLUETOOTH);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_BOOTLOADER_ON);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_CHIP);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_CLOUD_WIFI);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_DANGER);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_EMOJI_BASIC);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_EMOJI_HAPPY);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_EMOJI_SAD);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_HEART_BIG);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_HEART_SMALL);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_LIKE);
  delay (1500);
  Pantalla.loadFrame (LEDMATRIX_MUSIC_NOTE);
  delay (1500);    
  Pantalla.loadFrame (LEDMATRIX_RESISTOR);
  delay (1500);    
  Pantalla.loadFrame (LEDMATRIX_UNO);
  delay (1500);

}
