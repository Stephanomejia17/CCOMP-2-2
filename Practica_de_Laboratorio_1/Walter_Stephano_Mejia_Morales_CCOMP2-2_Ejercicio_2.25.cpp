#include <iostream>
using namespace std;

int main(){
    int a, b, c, resultado1 = 0, resultado2 = 0;
    cout << "Escriba el primer numero: "; cin >> a; // 6
    cout << "Escriba el segundo numero: "; cin >> b; // 4
    cout << "Escriba el tercer numero: "; cin >> c; // 8
    resultado1 = c%a;
    resultado2 = c%b;
    if(resultado1 == 0){
        cout << a << " es factor de " << c << endl;
    }
    else{
        cout << a << " no es factor de " << c << endl;
    }

    if(resultado2 == 0){
        cout << b << " es factor de " << c << endl;
    }
    else{
        cout << b << " no es factor de " << c << endl;
    }

    return 0;
}