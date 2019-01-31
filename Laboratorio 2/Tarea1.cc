#include <iostream>

int main(){
    int empleados = 5;  //porque no puede haber medio empleado y puede variar su número asi que no es const.
    const float salarios = 110.50;  // float porque pueden añadirse con centavos y const porque no deveria cambiar la cifra.
    float sueldo_total = empleados * salarios;  // float porque se multiplica por los salarios y no es const porque el número de empleados cambia.
    const float impuesto = 0.1;  // float porque usa decimales y const porque el impuesto es fijo.
    float Impuesto_total = sueldo_total * impuesto;  // float porque usa impuesto con decimales y no es const porque el sueldo total varía según los empleados.
    printf("Sueldo total: %f, Impuestos: %f\n", sueldo_total, Impuesto_total);
    ++empleados;
    ++empleados;
    ++empleados;
    sueldo_total = empleados * salarios;
    Impuesto_total = sueldo_total * impuesto;
    printf("3 empleados más: \n");
    printf("Sueldo total: %f, Impuestos: %f\n", sueldo_total, Impuesto_total);
}