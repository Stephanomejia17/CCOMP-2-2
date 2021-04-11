#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n y
// un caracter c, el cul si es 'p', imprima los n numeros
//pares y si el caracter es 'i' imprima los n numeros impares
int main(){
    int number;
    cout << "Ingrese el numero n: "<< endl;
    cin >> number;
    char c;
    cout << "Ingrese el caracter 'p' o 'i': ";
    cin >> c;

    int i = (c == 'p') ? 2 : 1;



    for(; i <= number; i+=2){
        cout << i << endl;
    }




    return 0;

}