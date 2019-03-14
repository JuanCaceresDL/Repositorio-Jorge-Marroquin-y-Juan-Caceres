#include <iostream>
#include "vector2d.hh"
#include "vehiculo.hh"
#include <string>

int main(){

    Vehiculo avion;
    avion.acelerar(Vector2d(3, 1), 5);
    avion.avanzar(10);
    std::string respuesta = avion.to_string();
    printf("%s\n", respuesta.c_str());
    avion.acelerar(Vector2d(-7.2, 8), 4);
    avion.avanzar(9);
    std::string estado = avion.to_string();
    printf("%s\n", estado.c_str());


}