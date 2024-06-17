/*
Este programa se usa de forma conjunta con el LED Matrix Editor para hacer
un Live Preview de los diseños
https://labs.arduino.cc/en/labs/led-matrix

*/


#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(115200);
  matrix.begin();
}

uint32_t frame[] = {
  0, 0, 0, 0xFFFF
};

void loop() {
  if(Serial.available() >= 12){
    frame[0] = Serial.read() | Serial.read() << 8 | Serial.read() << 16 | Serial.read() << 24;
    frame[1] = Serial.read() | Serial.read() << 8 | Serial.read() << 16 | Serial.read() << 24;
    frame[2] = Serial.read() | Serial.read() << 8 | Serial.read() << 16 | Serial.read() << 24;
    matrix.loadFrame(frame);
  }
}