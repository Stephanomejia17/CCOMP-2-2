/*
Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo
*/

#include <iostream>
using namespace std;

int main(){
    int tam;

    cout << "Ingrese la cantidad de elementos: "; cin >> tam;
    int arr[tam], *arrPtr, x;
    arrPtr = &arr[0];
    x = *arrPtr;
    for(int i = 0; i <tam; i++){
        cout << "Digite el numero en la posicion [" << i << "]: ";
        cin >> arr[i];
    }
    for(int i = 0; i < tam;i++){
        if(*arrPtr < x){
            x = *arrPtr;
        }
        arrPtr++;
    }
    cout << "El menor numero es: "<<x << endl;



    return 0;
}