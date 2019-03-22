#pragma once
#include <iostream>
#include <string>
#include "vector2d.hh"
#include "figura.hh"
#include <math.h> 
#define _USE_MATH_DEFINES 

class Circulo : public Figura {
    public:
    Vector2d centro;
    double radio;

    Circulo (Vector2d c, float r) : centro(c), radio(r){}

    virtual double area () const override{
        double are;
        are = M_PI * radio * radio;
        return are;
    }
    
    virtual void escalar (const double escala) override{
        radio = radio + escala;
    }
        
    virtual void mover (const Vector2d lugar)override{
        centro = lugar;
    }

    virtual bool estaAdentro(const Vector2d posicion) const override{
        float fun;
        fun = sqrt((centro.x - posicion.x) + (centro.y - posicion.y));

        if (fun <= radio){
            return true;
        }else{
            return false;
        }
    }

    virtual std::string toString() const override{
        std::string respuesta;
        std::string radioS = std::to_string(radio);
        respuesta = std::string("c(") + std::string(centro.to_string()) + std::string(", ") + std::string(radioS) + std::string(")");
        return respuesta;
    }
};