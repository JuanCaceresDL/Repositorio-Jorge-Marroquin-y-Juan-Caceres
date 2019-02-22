#pragma once

#include <iostream>

using namespace std;

float productoPunto (const float* x, const float* y, const int dims){
     float suma;
     for (int i = 0; i < dims; i++){
         suma = suma + x[i] * y[i];
     }
     return suma;
 }
 
bool sonOrtogonales(const float x[], const float y[], int dims){
    
    if (productoPunto (x, y, dims) == 0){
        
        return true;
    }else{
        return false;
    }
}

int main(){

    float x[] = {4, 2, 0};
    float y[] = {1, 2, 0};
    int dims = 3;
    
    printf("%f \n", productoPunto (x, y, dims));
    
    if (sonOrtogonales (x, y, 3) == true){
        printf("Los vectores son ortogonales");
    }else{
        printf("Los vectores no son ortogonales");}
    

    return 0;
}
