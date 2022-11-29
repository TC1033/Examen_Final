#pragma once
#include <iostream>
#include "Posicion.hpp"

class Personaje{
    public:
        Personaje();
        Personaje(std::string, Posicion);
        //Agrega el encabezado de getters

        //Agrega el encabezado de setters

        void avanzaHorz(int);
        void imprime();
    private:
        std::string nombre;
        Posicion pos;
};