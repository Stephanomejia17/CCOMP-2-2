/*
Ejercicio 1: Comprobar si un numeo es par o impar, y señalar la posicion de memoria
donde se está guardando el número. Con puntero
*/
#include <iostream>
using namespace std;

int main(){
    int numero, *dir_numero;

    cout << "Digite un numero: "; cin >> numero;

    dir_numero = &numero; //guardando la pos de memoria

    if(*dir_numero%2 == 0){
        cout << "El numero " << *dir_numero << " es par" << endl;
        cout << "Posicion de mem: " << dir_numero << endl;    
    }
    else{
        cout << "El numero " << *dir_numero << " es impar" << endl;
        cout << "Posicion de mem: " << dir_numero << endl; 
    }


    return 0;
}