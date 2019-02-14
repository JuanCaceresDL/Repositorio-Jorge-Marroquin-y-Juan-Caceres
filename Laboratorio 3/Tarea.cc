#include <iostream>

using namespace std;

int main(){
    char cuerpo, respuesta = 'n';
    float tiempo, cont = 0, velocidad = 0, aceleracion, distancia = 0;
while (cuerpo != 's'){
    printf("\n");
    printf("Cuerpo    Caracter\n");
    printf("Tierra:      t\n");
    printf("Venus:       v\n");
    printf("Luna:        l\n");
    printf("Callisto:    c\n");
    printf("Salir:       s\n");

    printf("Ingrese uno de los siguientes caracteres: ");
    cin>>cuerpo;
    
    if (cuerpo == 't' || cuerpo == 'v' || cuerpo == 'l' || cuerpo == 'c' || cuerpo == 's'){

    if (cuerpo != 's'){
    printf("ingrese tiempo de caida: ");
    cin>>tiempo;}}
    printf("\n");
        
    if (tiempo == 0){
        printf("La velocidad final es de %f m/s \n", velocidad);
        printf("La distancia es de %f m \n", distancia);
    }else{
    switch (cuerpo)
    {
        case 't':
        while (cont <= tiempo){
            aceleracion = 9.8 - (0.0023*velocidad);
            velocidad = velocidad + (aceleracion*0.01);
            distancia = distancia + (velocidad * 0.01);
            cont = cont + 0.01;
        }
        printf("La velocidad final es de %f m/s \n", velocidad);
        printf("La distancia es de %f m \n", distancia);
            break;
            
        case 'v':
        while (cont <= tiempo){
            aceleracion = 8.87 - (0.0023*velocidad);
            velocidad = velocidad + (aceleracion*0.01);
            distancia = distancia + (velocidad * 0.01);
            cont = cont + 0.01;
        }
        printf("La velocidad final es de %f m/s \n", velocidad);
        printf("La distancia es de %f m \n", distancia);
            break;
            
        case 'l':
        while (cont <= tiempo){
            aceleracion = 1.62;
            velocidad = velocidad + (aceleracion*0.01);
            distancia = distancia + (velocidad * 0.01);
            cont = cont + 0.01;
        }
        printf("La velocidad final es de %f m/s \n", velocidad);
        printf("La distancia es de %f m \n", distancia);
            break;
        
        case 'c':
        while (cont <= tiempo){
            aceleracion = 1.23;
            velocidad = velocidad + (aceleracion*0.01);
            distancia = distancia + (velocidad * 0.01);
            cont = cont + 0.01;
        }
        printf("La velocidad final es de %f m/s \n", velocidad);
        printf("La distancia es de %f m \n", distancia);
            break;
            
        case 's':
            break;
            
        default:
        printf("El caracter %c no es valido \n", cuerpo);
            break;
    }}
}

}