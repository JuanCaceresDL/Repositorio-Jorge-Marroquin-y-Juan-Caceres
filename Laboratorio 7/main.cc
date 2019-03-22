#include <iostream>
#include <string>
#include "vector2d.hh"
#include <math.h> 
#include "circulo.hh"
#define _USE_MATH_DEFINES 

int main (){
    Circulo cir(Vector2d(0,0), 5);
    std::string estado = cir.toString();
    printf("%s\n", estado.c_str());

}