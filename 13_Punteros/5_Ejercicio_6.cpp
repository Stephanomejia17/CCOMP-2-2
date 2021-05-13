/*
Ejercicio 6: Hacer una funcion para almacenar N numeros en una arreglo dinamico, 
posteriormente en otra funcion buscar un numero en particular
Nota: Puedes utilizar cualquier metodo de busqueda(Secuencial, Binaria)
*/
#include <iostream>
#include <stdlib.h> //new y delete
using namespace std;

int nElementos, *elemento;

void PedirDatos();
void Buscar(int *, int);

int main(){
    PedirDatos();
    Buscar(elemento, nElementos);

    delete[] elemento;
    return 0;
}

void PedirDatos(){
    cout << "Digite el numero de elementos del arreglo: ";
    cin >>nElementos;

    elemento = new int[nElementos];

    for(int i = 0; i < nElementos; i++){
        cout << "Digite un numero[" << i <<"]: "; cin >> *(elemento+i); //elemento[i]
    }
}

void Buscar(int *elemento, int nElementos){
    int aux;

    cout << "Ingrese un numero para buscarlo en el arreglo: "; cin >> aux;

    for(int i = 0; i < nElementos ; i++){
        if(*(elemento+i) == aux){
            cout << "El numero " << aux << " esta en la posicion: " << i;
        }
    }

}