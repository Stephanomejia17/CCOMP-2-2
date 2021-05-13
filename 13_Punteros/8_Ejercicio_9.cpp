/*
Implementar DOS FUNCIONES, UNA RECURSIVA Y OTRA ITERATIVA, en las cuales se evaluará un arreglo de enteros
(enteros de un dígito) y debe retornar true si los elementos de dicho arreglo representan un palindromo y 
false caso contrario. EN LA IMPLEMENTACIÓN DEBE USAR UNICAMENTE PUNTEROS.

Por ejemplo

si el arreglo tiene {1, 2, 3, 2, 1} retorna true,
si el arreglo tiene {1, 2, 3, 3, 1} retorna false,
Implemente la función principal (main) donde debe probar el funcionamiento de las funciones.

Explique su solución en la caja de texto.
Subir el archivo de código fuente con el siguiente formato en el nombre: PREGUNTA_3_PALINDROMO_APELLIDOS_NOMBRE.cpp
*/

#include <iostream>
using namespace std;

bool PalI(int *);
bool PalR(int *);


int main(){
    int arr[5]={1,2,3,2,1};
    int array[5]={1,2,3,3,1};

    PalI(arr);
    PalI(array);

}

bool PalI(int *arr){
    int tam = sizeof(arr)/sizeof(arr[0]);
    int cont = 0;
    for(int i = 0; i < 3; i++){
        if(arr[i] == *(arr+tam-1)){
            cont += 1;
        }
        tam--;
    }
    if(cont == 2){
        return true;
    }
    else{
        return false;
    }
}
