/**
 * (Eliminación de duplicados con matriz) Utilice una matriz unidimensional para resolver el siguiente problema. 
 * Leer en 20 números, cada uno de los cuales está entre 10 y 100, inclusive. A medida que se lee cada número, 
 * valídelo y guárdelo en la matriz solo si no es un duplicado de un número ya leído. Después de leer todos los 
 * valores, muestre solo los valores únicos que ingresó el usuario. Prevea el "peor caso" en el que los 20 números 
 * son diferentes. Utilice la matriz más pequeña posible para resolver este problema.
 **/

#include <iostream>

using namespace std;
int main(){
    int vector[20];
    for(int i = 0; i < 20; i++){
        cout << "Ingrese un numero entre 10 y 100: "; cin >> vector[i];
        if(vector[i] < 10 || vector[i] > 100){
            cout << "El numero ingresado no esta entre 10 y 100\n";
            break;
        }
        else{
            for(int m =0; m < i; m++){
                if(vector[i] == vector[m]){
                    vector[i] = 0;
                    cout << "El numero ingresado ya se encuentra en el arreglo\n";
                }
            }
        }
    }


    for(int i = 0; i<20; i++){
        cout << vector[i] << " ";
    }


    return 0;
}