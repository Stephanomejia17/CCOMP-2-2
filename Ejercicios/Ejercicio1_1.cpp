// Escribe un programa que lea de la entrada estándar dos números y muestre 
//en la salida estándar su suma, resta, multiplicación y división.
#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    cout << "Ingrese el primer numero: "; cin >> x;
    cout << "Ingrese el segundo numero: "; cin >> y;
    cout << "Suma: " << x+y << endl << "Resta: " << x-y << endl << "Multiplicacion: " << x*y << endl << "Division: " << x/y << endl; 
}