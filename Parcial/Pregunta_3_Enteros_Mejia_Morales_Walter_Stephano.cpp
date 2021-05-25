/*
Implemente una función que reciba un arreglo de enteros y reporte true si los 
elementos del arreglo representan un palindrome, esto significa que se lee igual 
de izquierda a derecha que de derecha a izquierda, y retorne false caso contrario.

Por ejemplo, si el arreglo tiene los siguientes elementos: 

{1, 2, 3, 4, 3, 2, 1} , representa un palindrome

{1, 2, 3, 4, 5, 6, 7} , no representa un palindrome.

Explique el código en la caja de texto.

Suba su solución con el siguiente formato: PREGUNTA_3_ENTEROS_APELLIDOS_NOMBRES.cpp
*/

#include <iostream>
using namespace std;

bool PalI(int arr[], int nElementos){
    int cont = 0;
    int t=nElementos;
    for(int i = 0; i < t-1; i++){
        if(arr[i] == arr[t-1]){
            cont += 1;
        }
        else{
            return false;
        }
        t--;
    }
    return true;
}
int main(){
    int arr[]={1, 2, 3, 4, 3, 2, 1};
    int array[]={1, 2, 3, 4, 5, 6, 7};


    PalI(arr, 7);
    PalI(array, 7);



}