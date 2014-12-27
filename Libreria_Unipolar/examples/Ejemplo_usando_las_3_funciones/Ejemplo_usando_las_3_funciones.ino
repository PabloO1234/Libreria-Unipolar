// EJEMPLO DE USO DE LA LIBRERIA UNIPOLAR PARA MOTOR STEPPER 28BYJ48

#include <Unipolar.h> //Incluimos la librería 
Unipolar motor (10,11,12,13); // Creamos el objeto 'motor' asociado a 'Unipolar' y asociamos
                            // 4 pines digitales que queramos, siguiendo el siguiente orden;
                            // (naranja, amarillo, rosa, azul) 
                            // En este caso: 
                            //// cable naranja->pin 8
                            //// cable amarillo->pin 9
                            //// cable rosa->pin 10
                            //// cable azul->pin 11
void setup(){}
void loop(){
  motor.derecha(); //Giramos a la derecha
  delay (1000);
  motor.para(); //Paramos el motor
  delay (1000);
  motor.giraizquierda(); //Giramos a la izquierda
  delay (1000);
}
