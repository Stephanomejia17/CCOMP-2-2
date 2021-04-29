#include <iostream>
#include <string>
#include "Waler_Mejia_Empleado.h"

using namespace std;

void imprimirEmpleador(Empleado arr[], const int tam){
    for(int i = 0; i < tam; i++){
        cout << arr[i].getNombre();
        cout << arr[i].getEdad();
    }
}
int main(){
    Empleado arr[3];

    Empleado e1;
    Empleado e2("Jose", 30);
    Empleado e3("Juan", 35);
    
    arr[0] = e1;
    arr[1] = e2;
    arr[2] = e3;

    //Solo funciona cuando declaro antes mi arreglo
    int tam = sizeof(arr)/sizeof(arr[0]);

    imprimirEmpleador(arr, tam);

    Empleado arr1[] = {e1, e2, e3};
    tam = sizeof(arr1)/sizeof(arr1[0]);

    imprimirEmpleador(arr1, tam);


    return 0;
}