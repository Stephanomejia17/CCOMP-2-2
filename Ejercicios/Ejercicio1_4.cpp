/*
* Ejecute el programa del ejercicio anterior con entradas erróneas y observe 
* los resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un 
* dato de tipo entero.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string edad;
    char sexo;
    float altura;
    cout <<"Ingrese edad: "; cin >> edad;
    cout <<"Ingrese sexo: "; cin >> sexo;
    cout <<"Ingrese altura: "; cin >> altura;

    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
}