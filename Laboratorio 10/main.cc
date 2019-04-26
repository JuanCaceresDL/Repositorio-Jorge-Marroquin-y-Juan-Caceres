#include <iostream>
#include <stdio.h>

template<typename T>
class Iterador{
    public:
    virtual bool valor(T& resultado) = 0;
    virtual void siguiente() = 0;
};

template<typename K, typename V, typename T>
class Diccionario : public Iterador<T>{
    public:
    K* nombre;
    V* guardar;

    Diccionario (K n, V g) : nombre(n), guardar (g){}
    virtual bool valor(T& resultado) override{
        
    }
    virtual void siguiente() override{

    }
    T& operator[] (const K& k){
        T* e = new T();
        return *e;
       
        
    }
};


int main (){

}