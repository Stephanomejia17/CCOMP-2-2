/*
Transmision de direcciones
Ejemplo: Intercambiar el valor de 2 variables 
*/

#include <iostream>
using namespace std;

void intercambio(float *,float *); //indicamos que utilizaremos dos punteros


int main(){
    float num1 = 20.8, num2 = 6.78;
    cout << "Primer Numero: " << num1 << endl;
    cout << "Segundo Numero: " << num2 << endl;

    intercambio(&num1, &num2); //llamarda a la funcion intercambio

    cout << "\n\nDespues del intercambio: \n\n";
    cout << "El nuevo valor de num1: " << num1 << endl;
    cout << "El nuevo valor de num2: " << num2 << endl; 

    return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
    float aux;


    //intercambiar los valores de las variables
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}