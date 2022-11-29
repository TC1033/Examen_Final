#include <iostream>
#include "Personaje.hpp"
using namespace std;

void llenaArreglo(Personaje personajes[], int cantidad){
    string nom;
    int x,y;
    for(int i=0; i<cantidad;i++){
        cout << "Datos del Personaje "<< i+1 << std::endl;
        cout<<"Nombre: ";
        cin>>nom;
        cout <<"Ingresa posX y posY (separados con espacio): ";
        cin >> x >> y;
        /*Modifica ahora al objeto Personaje de la posición i del arreglo
        con los datos recibidos*/

}

void imprimePersonajes(Personaje personajes[], int cantidad){
    //Implementa la función
}


int main()
{
    const int NUM = 3; //constante para el tamaño del arreglo
    //Agrega las instrucciones necesarias de acuerdo a lo que te solicitan

    return 0;
}