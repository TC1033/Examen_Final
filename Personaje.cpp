#include "Personaje.hpp"

//Agrega tus implementaciones de constructores, getters, setters y adicionales


//Completa el método avanzaHorz
void Personaje::avanzaHorz(int cuanto){
    Posicion actual = getPos();
    int nuevaX = actual.getPosX() + cuanto;
    actual.setPosX(nuevaX);
    //Completa actualizando el atributo pos con la nueva posición

}