/**
 *(Eliminación de duplicados con vector) Ejercicio de reimplementación 7.13 usando un vector. Empezar
 *con un vector vacío y use su función push_back para agregar cada valor único al vector.
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
int push_back(int arr[], int pos,int numero){
    arr[pos] = numero;
}
void Imprimir(int arr[], int tam){
    for(int i=0; i<tam;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int i,tam=5, num, arr[5];

    for(i = 0; i < tam; i++){
        cout << "Introduzca un numero entre 10 y 100: "; cin >> num;
        if(num < 10 || num > 100){
            cout << "El numero ingresado no esta entre 10 y 100" << endl; break;
        }
        while(Repetido(num, i)){
            cout << "Numero Repetido" << endl;
            cout << "Introduzca otro numero entre 10 y 100: "; cin >> num;
        }
        push_back(Vector, i, num);
    }
    Imprimir(Vector,5);
    return 0;
}