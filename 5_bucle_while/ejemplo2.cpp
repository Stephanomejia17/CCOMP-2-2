#include <iostream>

using namespace std;


//escriba un programa que solicite un número n e indique si dicho numero es potencia de 2

int main(){
    int result;

    cout << "Ingrese un numero: "; cin >>result;
    while ((result%2 == 0) && (result > 1)){
        result = result/2;
    }
    if (result == 1)
        cout << "Es potencia de 2" << endl;
    else
        cout << "No es potencia de 2" << endl;
    
    return 0;

}