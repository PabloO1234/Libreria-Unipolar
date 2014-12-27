/*
Unipolar.cpp 
Libreria para controlar el motor paso a paso unipolar 
*/

#include "arduino.h"
#include "Unipolar.h"

Unipolar::Unipolar(int motorPin1, int motorPin2, int motorPin3, int motorPin4)
{
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);  
  _motorPin1 = motorPin1;
  _motorPin2 = motorPin2;
  _motorPin3 = motorPin3;
  _motorPin4 = motorPin4;
}
void Unipolar::giraderecha()
{
  digitalWrite(_motorPin1, HIGH);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin4, LOW);
 delay(1);
 
 digitalWrite(_motorPin1, HIGH);
 digitalWrite(_motorPin2, HIGH);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin4, LOW);
 delay (1);
 
 digitalWrite(_motorPin1, LOW);
 digitalWrite(_motorPin2, HIGH);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin4, LOW);
 delay(1);
 
 digitalWrite(_motorPin1, LOW);
 digitalWrite(_motorPin2, HIGH);
 digitalWrite(_motorPin3, HIGH);
 digitalWrite(_motorPin4, LOW);
 delay(1);
 
 digitalWrite(_motorPin1, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin3, HIGH);
 digitalWrite(_motorPin4, LOW);
 delay(1);
 
 digitalWrite(_motorPin1, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin3, HIGH);
 digitalWrite(_motorPin4, HIGH);
 delay (1);
 
 digitalWrite(_motorPin1, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin4, HIGH);
 delay(1);
 
 digitalWrite(_motorPin1, HIGH);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin4, HIGH);
 delay(1);
}
void Unipolar::giraizquierda()
{
 digitalWrite(_motorPin4, HIGH);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, HIGH);
 digitalWrite(_motorPin3, HIGH);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay (1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, HIGH);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, HIGH);
 digitalWrite(_motorPin2, HIGH);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, HIGH);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, HIGH);
 digitalWrite(_motorPin1, HIGH);
 delay (1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, HIGH);
 delay(1);
 
 digitalWrite(_motorPin4, HIGH);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, HIGH);
 delay(1);
 
 
}
void Unipolar::para()
{
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay (1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay (1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 digitalWrite(_motorPin4, LOW);
 digitalWrite(_motorPin3, LOW);
 digitalWrite(_motorPin2, LOW);
 digitalWrite(_motorPin1, LOW);
 delay(1);
 
 
}

