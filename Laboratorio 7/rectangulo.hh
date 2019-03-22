#pragma once
#include <iostream>
#include <string>
#include "vector2d.hh"
#include "figura.hh"
#include <math.h> 
#define _USE_MATH_DEFINES 

class Rectangulo : public Figura {
    public:
    Vector2d esquina;
    double altura;
    double largo;

    Rectangulo (Vector2d e, double l, double a) : esquina(e), largo(l), altura(a) {}

    virtual double area () const override{
        double are;
        are = altura * largo;
        return are;
    }
    
    virtual void escalar (const double escala) override{
    
    	double y2;
        y2 = (altura * (largo + escala)) / largo;
        largo = largo + escala;
        altura = y2;
    }
        
    virtual void mover (const Vector2d lugar)override{
        esquina = lugar;
    }

    virtual bool estaAdentro(const Vector2d posicion) const override{
        double distancia = esquina.x + largo;
		double alt = esquina.y + altura;
		
        if (posicion.x >= esquina.x && posicion.x <= distancia){
            if (posicion.y >= esquina.y && posicion.y <= alt){
            	return true;
        	}else{
        		return false;
        } }else {
        	return false;
    	}
    }
    

    virtual std::string toString() const override{
        std::string respuesta;
        std::string la = std::to_string(largo);
        std::string an = std::to_string(altura);
        respuesta = std::string("r(") + std::string(esquina.to_string()) + std::string(", ") + std::string(la) + std::string(", ") + std::string(an) + std::string(")");
        return respuesta;
    }
};