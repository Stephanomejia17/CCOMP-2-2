/*
(Pass-by-Value vs. Pass-by-Reference) Escriba un programa C ++ completo con las dos funciones alternativas 
que se especifican a continuación, cada una de las cuales simplemente triplica el recuento de variables 
definido en main. Luego compare y contraste los dos enfoques. Estas dos funciones son:

a) función tripleByValue que pasa una copia de contar por valor, triplica la copia y devuelve el nuevo valor y

b) función tripleByReference que pasa el recuento por referencia a través de un parámetro de referencia y 
triplica el valor original del recuento a través de su alias (es decir, el parámetro de referencia).
*/

#include <iostream>

using namespace std;
int Triple_by_Value(int x){
    x = x*3;

    return x;
}

int Triple_by_Reference(int& x){
    x = x*3;

    return x;
}


int main(){
    int num1, num2;

    cout << "Introduca el primer numero: "; cin >> num1;
    cout << "Introduca el segundo numero: "; cin >> num2;
    Triple_by_Value(num1);
    Triple_by_Reference(num2);

    cout << "El valor del primer numero es: " << num1 << endl;
    cout << "El valor del segundo numero es: " << num2 << endl;

    return 0;
}