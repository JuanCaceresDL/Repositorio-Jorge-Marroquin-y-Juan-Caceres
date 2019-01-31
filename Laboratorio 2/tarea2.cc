#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;

    int resultado = ++valor1 + valor2++; 
    /*por orden de operaciones que ejecuta el programa, primero aumenta en 1 unidad el valor 1 luego 
    ejecuta la suma con valor 2 para dar el resultado, y como extra le aumentó en 1 unidad al valor 2
    pero sin influir en el resultado final */

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
}