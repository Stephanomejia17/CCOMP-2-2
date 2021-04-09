#include <iostream>

using namespace std;

int main(){

    char caracter;
    cout << "Ingrese un  caracter: ";
    cin >> caracter;
    //Convierte el valor char en entero para que de su valor ASCII
    int valor = static_cast<int>(caracter);

    if( (valor >= 65 && valor <=90) || (valor >= 97 && valor <= 122)){
        cout << "Es una letra" << endl;
    } else{
        cout << "No es una letra" << endl;
    }


    return 0;
}