#include <iostream>

using namespace std;

int main(){
    int num1, num2, result;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

/*
    if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }
*/
    //OPERADOR TERNARIO ?:
    //EXPRESIÓN BOOLEANA ? TRUE : FALSE


    result = (num1 > num2) ? num1 : num2;
    cout << "El mayor numero es: " << result << endl;
}
