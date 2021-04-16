//  Escriba un programa que lea las tres notas de un alumno y calcule la nota 
//  final media de dicho alumno.

#include <iostream>

using namespace std;

int main(){
    float x, y, z;
    cout << "Ingrese la primera nota: "; cin >> x;
    cout << "Ingrese la segunda nota: "; cin >> y;
    cout << "Ingrese la tercera nota: "; cin >> z;

    cout << "Tu promedio es de: "<< (x+y+z)/3;
}
