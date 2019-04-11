#include "expression.hh"
#include <stdio.h>
#pragma once

class Valor : public Expression{
    virtual double evaluar() override;
    Valor(double _valor);
    private:
    double valor;
};