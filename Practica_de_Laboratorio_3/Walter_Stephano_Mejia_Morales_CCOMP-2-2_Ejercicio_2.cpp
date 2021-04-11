/*Implemente un programa que imprima los n numeros perfectos
Un número perfecto es un número entero positivo que es igual 
a la suma de sus divisores propios positivos.
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248
8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064
*/
#include <iostream>

using namespace std;
int main(){
    int num=1, M, x, h;
    cout << "Ingrese un numero: ";
    cin >> M;
    while(num <= M){
        x = 1;
        h = 0;
        while(num > x){
            if(num % x ==0){
                h = h+x;
            }
            x +=1;
        }
        if(h == num){
        cout << num << endl;
        }
        num += 1;
    }
    return 0;
}