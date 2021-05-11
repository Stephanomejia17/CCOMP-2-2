/*
Ejercicio 2: Determinar si un numero es primo o no; con punteros y además indicar 
en que posición de memoria se guardó el número
*/
#include <iostream>
using namespace std;

int main(){
    int num, *numPtr, cont = 0;

    cout << "Ingrese un numero: "; cin >> num;

    numPtr = &num;

    for(int i = 1; i <= *numPtr; i++){
        if(*numPtr%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        cout << "El numero " << *numPtr << " es primo" << endl;
    }
    else
        cout << "El numero " << *numPtr << " no es primo" << endl;



}