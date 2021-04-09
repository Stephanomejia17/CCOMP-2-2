#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Ingrese un número: "; cin >> number;


    /*
    true es equivalente a algo diferente a cero
    false es equivalente a 0 (CERO)
    */

    if ( ! (number % 2)){
        cout << "Es Par" << endl;
    } else{
        cout << "Es impar" << endl;


    return 0;
    }
}