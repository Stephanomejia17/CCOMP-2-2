/**
Realice un programa que solicite de la entrada estándar un entero del 1 al 
10 y muestre en la salida estándar su tabla de multiplicar.
**/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x, y = 0;
    cout << "Ingrese el numero entre 0 y 10: "; cin >> x;
    if(x > 0 && x <= 10){
        do{
            cout << x << " x " << y << setw(4) << "= " << x*y << endl;
            y += 1;
        }
        while(10 >= y);
    }
}