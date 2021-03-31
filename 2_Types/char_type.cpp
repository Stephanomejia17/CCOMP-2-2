#include <iostream>

using namespace std;

int main() {
    //Char: se usa para caracteres, pero se le debe asignar con comillas simples ('')
    //SOLO SE DEBE ASIGNAR UN CARACTER
    char c = 'A';

    cout << c << endl;
    cout << "Tamano en bytes: " << sizeof(c) << endl;

    // Todo caracter tiene un valor entero

    int valor = static_cast<int>(c);

    cout << "El valor entero de " << c << " es: " << valor << endl;

    return 0;
}