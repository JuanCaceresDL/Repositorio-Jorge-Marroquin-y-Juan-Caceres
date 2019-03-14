
#include <iostream>
#include "vector2d.hh"

class Vehiculo {
private:
    Vector2d Velocidad;
    Vector2d Posicion;
public:
    Vehiculo();
    Vector2d getVelocidad();
    Vector2d getPosicion();
    std::string to_string();

    void acelerar (Vector2d aceleracion, float tiempo );
    void avanzar (float time);
};