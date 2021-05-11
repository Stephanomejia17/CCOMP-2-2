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
int x = 0;
int tamaño(int arr[]){
    int tam= sizeof(arr)/sizeof(arr[0]);
    return tam;
}

bool PalI(int *arr, int *tam){
    for(int i = 0; i < *tam; i++){
        if(arr[i] == arr[*tam-1]){
            tam--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool PalR(int *arr, int *tam){
    if(arr > tam){
        return true;
    }
    else if(arr[x] != arr[*tam-1]){
        return false;
    }
    else{
        ++x;
        return PalR(++arr, --tam);
    }
}   

int main(){
    int arr[]={1,2,3,2,1};
    int arr2[]= {1,2,3,4,1};
    int tam = tamaño(arr);
    int tam2 = tamaño(arr2);

    int *arrPtr, *arr2Ptr, *tamPtr, *tam2Ptr;

    arrPtr = arr;
    arr2Ptr = arr2;
    tamPtr = &tam;
    tam2Ptr = &tam2;

    PalI(arrPtr, tamPtr);
    PalI(arr2Ptr, tam2Ptr);

    return 0;
}