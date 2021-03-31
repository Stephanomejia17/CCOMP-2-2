#include <iostream>

using namespace std;

int main() {
    
    int a = 10;
    int b = 3;
    float c = 3;
    double d = 3; 
    /*
    double: Puede ser reemplazado por float, pero normalmente double se usa para flotantes de mayor tamaño
    */

    cout << "La suma es: " << a+b << endl;
    cout << "La multiplicacion de a y b es: " << a*b << endl;

    //Entero divido con entero me dará un entero
    cout << "La division de a y b es: " << a/b << endl;

    //Ahora dividiremos con un flotante
    cout << "La division de a y c es: " << a/c << endl;

    //Intentemos con double
    cout << "La division de a y d es: " << a/d << endl;


    return 0;
}