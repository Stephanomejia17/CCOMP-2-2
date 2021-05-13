/*
Ejercicio 5: Pedir al usuario N numeros, almacenarlos en un arreglo dinámico,
posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla.
Nota: Utilizar cualquier método de ordenamiento
*/
#include <iostream>
#include <stdlib.h> //new y delete
using namespace std;

//Prototipos de funciones
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);


int nElementos, *elemento;

int main(){
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);

    delete[] elemento; //liberar la memoria utilizada para el arreglo dinamico


    return 0;
}

void pedirDatos(){
    cout << "Digite el numero de elementos del arreglo: ";
    cin >>nElementos;

    elemento = new int[nElementos];

    for(int i = 0; i < nElementos; i++){
        cout << "Digite un numero[" << i <<"]: "; cin >> *(elemento+i); //elemento[i]
    }
}

//metodo burbuja
//ordenar el arreglo
void ordenarArreglo(int *elemento, int nElementos){
    int aux;

    for(int i = 0; i < nElementos; i++){
        for(int j = 0; j <nElementos-1; j++){
            if(*(elemento+j) > *(elemento+j+1)){ //elemento[j] > elemento[j+1]
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
        }
    }
}

void mostrarArreglo(int *elemento, int nElementos){
    cout << "\n\nMostrando arreglo ordenado: " << endl;
    for(int i = 0 ; i < nElementos; i++){
        cout << *(elemento+i) << " "; //elemento[i]
    }
}   