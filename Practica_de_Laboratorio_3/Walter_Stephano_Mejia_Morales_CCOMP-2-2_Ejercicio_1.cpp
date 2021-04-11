#include <iostream>
using namespace std;
/*Implemente un programa que solicite por teclado
un numero n e imprima los n primeros primos
Si ingresa 20
Debe imprimir: 2 3 5 7 11 13 17 19
Un numero es primo si es divisible unicamente entre 1 y el mismo numero
*/
int main(){
   int x, num=1, contador, M;
   cout << "Ingrese un numero: "; cin >> M;
    while (num <= M){
        contador = 0;
        x = 1;
        while (num >= x)
        {
            if(num%x ==0){
                contador += 1;
            }
            x += 1;
        }
        if (contador == 2){
            cout << "El numero " << num << " es primo" << endl;
        }
        num += 1;
    }
    return 0;
}