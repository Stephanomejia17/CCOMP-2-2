/*** 
 *  La calificación final de un estudiante es el promedio de tres notas: la nota 
 *  de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota 
 *  de participación que cuenta el 10% restante. Escriba un programa que lea las tres notas 
 *  del alumno y escriba su nota final. 
 ***/
#include <iostream>

using namespace std;

int main(){
    float x, y, z;
    cout << "Ingrese la primera nota: "; cin >> x;
    cout << "Ingrese la segunda nota: "; cin >> y;
    cout << "Ingrese la tercera nota: "; cin >> z;
    x *= 0.3;
    y *= 0.6;
    z *= 0.1;
    cout << "Nota final: " << (x+y+z);
    
    
    
}