/*
* (Imprime una matriz) Escribe una función recursiva printArray que toma una matriz, 
* un subíndice inicial y un subíndice final como argumentos, no devuelve nada e imprime 
* la matriz. La función debe detener el procesamiento y regresar cuando el subíndice 
* inicial sea igual al subíndice final.
*/
#include <iostream>

using namespace std;

void printArray (int matriz[][2], int i, int f){
    int ind = i;
    int fin = f;
    for(ind; ind <= fin;ind++){ // 
        while(fin < 2){ // 
            cout << matriz[ind][fin] << " "; // 
            printArray(matriz, ind, fin++);
        }
        fin = 0;
        cout << "\n"; // salto de linea
    }
}

int main(){
    int indice_i = 0;
    int indice_f = 0;
        //  i  j
    int arr[2][2]={{1,2},{3,4}};
    printArray(arr,indice_i,indice_f);
}