#include "vector2d.hh"
#include "vehiculo.hh"
#include <string>

Vehiculo::Vehiculo() : Velocidad(0,0), Posicion(0,0){}

Vector2d Vehiculo::getVelocidad(){
    return Velocidad;
}

Vector2d Vehiculo::getPosicion(){
    return Posicion;
}

std::string Vehiculo::to_string(){
    std::string respuesta = Velocidad.to_string();
    std::string respuesta2 = Posicion.to_string();
    std::string res = std::string("La velocidad es ") + std::string(respuesta) + std::string(" , la Posicion es ") + std::string(respuesta2);
    return res;
}

void Vehiculo::acelerar(Vector2d acel, float time){
    Velocidad.x = Velocidad.x + acel.x * time;
    Velocidad.y = Velocidad.y + acel.y * time;
    Posicion.x = Posicion.x + Velocidad.x* time;
    Posicion.y = Posicion.y + Velocidad.y * time;
}

void Vehiculo::avanzar(float t){
    Posicion.x = Posicion.x + Velocidad.x* t;
    Posicion.y = Posicion.y + Velocidad.y * t;
}