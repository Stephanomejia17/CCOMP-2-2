#include <iostream>
using namespace std;

//Implementar una funcion que invierta los elementos de un
//arreglo de enteros, pero usando unicamente punteros
void imprimir(const int *arr, int tam){
    while(tam--){
        cout << *arr++ << " ";
    }
    cout << endl;
}

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
//iterativo
void invertir(int *ini, int *fin){
    while(ini < fin){
        intercambio(*ini++, *fin--);
    }
}
//recursivo
void invertirR(int *ini, int *fin){
    if(ini >= fin){
        return;
    }
    intercambio(*ini, *fin);
    invertirR(++ini, --fin);
}
int main(){
    int arr[] = {10,2,4,6,7,9,7};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; //es quievalente a poner => int *ptr = &arr[0]

    imprimir(arr, tam);
    invertir(arr, arr+tam-1);
    imprimir(arr,tam);

    return 0;
}