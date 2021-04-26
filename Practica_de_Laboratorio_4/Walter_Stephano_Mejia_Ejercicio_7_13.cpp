/**
 * (Eliminación de duplicados con matriz) Utilice una matriz unidimensional para resolver el siguiente problema. 
 * Leer en 20 números, cada uno de los cuales está entre 10 y 100, inclusive. A medida que se lee cada número, 
 * valídelo y guárdelo en la matriz solo si no es un duplicado de un número ya leído. Después de leer todos los 
 * valores, muestre solo los valores únicos que ingresó el usuario. Prevea el "peor caso" en el que los 20 números 
 * son diferentes. Utilice la matriz más pequeña posible para resolver este problema.
 **/

#include <iostream>

using namespace std;
int Vector[]={};
bool Repetido(int num, int i){
    for(int x=0; x<i; x++){
        if(num == Vector[x]){
            return true;
        }
    }

    return false;
}
void Imprimir(int arr[], int tam){
    for(int i=0; i<tam;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int i,tam=20, num, arr[20];

    for(i = 0; i < tam; i++){
        cout << "Introduzca un numero entre 10 y 100: "; cin >> num;
        if(num < 10 || num > 100){
            cout << "El numero ingresado no esta entre 10 y 100" << endl; break;
        }
        while(Repetido(num, i)){
            cout << "Numero Repetido" << endl;
            cout << "Introduzca otro numero entre 10 y 100: "; cin >> num;
        }
        Vector[i] = num;
    }
    Imprimir(Vector,20);
    return 0;
}