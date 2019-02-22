#include <iostream>

void porValor(int valor){
    valor = 42;
}

void porReferencia(int& valor){
    valor = 42;
}

int main(){
    int valor1 = 0;
    int valor2 = 0;

    porValor(valor1);
    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);//El valor 1 si da como resultado 0 ya que en la declaración del Void este lo toma como un valor normal que luego en el main se cambia por 0.
    printf("El resultado por referencia es %i\n", valor2);//en cambio el valor 2 al tener el "&" se toma el valor original que se declaró en el void y hace referencia a ese mismo valor, sin tomar en cuenta el cambio en el main.
}