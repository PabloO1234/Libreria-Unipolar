/*
  Unipolar.h - Libreria para controlar el motor paso a paso unipolar
*/
#ifndef Unipolar_h
#define Unipolar_h
#include "arduino.h"
class Unipolar{
  public:
   Unipolar(int motorPin1, int motorPin2, int motorPin3, int motorPin4);
   void giraderecha();
   void giraizquierda();
   void para();
  private:  
   int _motorPin1;
   int _motorPin2;
   int _motorPin3;
   int _motorPin4;
};
#endif
