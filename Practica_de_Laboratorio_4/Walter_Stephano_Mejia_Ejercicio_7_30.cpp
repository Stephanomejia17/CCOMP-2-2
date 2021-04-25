/*
* (Imprime una matriz) Escribe una función recursiva printArray que toma una matriz, 
* un subíndice inicial y un subíndice final como argumentos, no devuelve nada e imprime 
* la matriz. La función debe detener el procesamiento y regresar cuando el subíndice 
* inicial sea igual al subíndice final.
*/
#include <iostream>

using namespace std;

void printArray (int matriz[2][2], int indice_i, int indice_f){
    if(indice_i == indice_f ){
        cout << "\n";
    }
    else{
        cout <<  matriz[indice_i][indice_f] << " "; printArray(matriz, indice_i, indice_f+1);
    }
}
int main(){
    int arr[2][2]={{1,2},{3,4}};
    printArray(arr,2,2);
}