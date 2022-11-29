#include <iostream>
#include "Posicion.hpp"
// ===============
// implementations

Posicion::Posicion(){
   //implementa el constructor default
}

Posicion::Posicion(int _posX, int _posY){
   //vamos a cambiar los datos usando los setters éstos tendrán las validaciones
   // No le muevas nada, ya está listo
   setPosX(_posX);
   setPosY(_posY);
}

// Continua con la implementación de la clase