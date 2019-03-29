#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

bool parse(const std::string& valor, int& resultado){
    int tam = valor.size();
    int i = 0;
    for(int i = 0; i < tam; i++)
    {
        if(valor[i] == '0' || valor[i] == '1' || valor[i] == '2' || valor[i] == '3' || valor[i] == '4' ||
        valor[i] == '5' || valor[i] == '6' || valor[i] == '7' || valor[i] == '8' || valor[i] == '9' ){
            
            if (i == ( tam - 1 )){
                resultado = atoi(valor.c_str());
            return true;
            }
        }else{
            return false;
        }
        
    }
    return false;
}

int main(){
std::string str1("12345");
std::string str2("12345_mal");
int resultado = 0;
if (parse(str1, resultado)){
// Imprime "Resultado 12345"
printf("Resultado1 %i", resultado);
}
if (!parse(str2, resultado)){
// Imprimie "No se pudo parsear str2"
printf("No se pudo parsear str2");
}
}