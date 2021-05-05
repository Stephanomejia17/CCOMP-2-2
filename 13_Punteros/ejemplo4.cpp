#include <iostream>
using namespace std;

void imprimir(const int *arr, int tam){
    while(tam--){
        cout << *arr++ << " ";
    }
    cout << endl;
}

void ImprimirR(const int *arr, int tam){
    if(tam == 0){
        cout << endl;
        return;   
    }
    cout << *arr << " ";
    ImprimirR(++arr, --tam);
}




int main(){
    int arr[] = {10,2,4,6,7,9,7};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; //es quievalente a poner => int *ptr = &arr[0]

    ImprimirR(arr, tam);

    return 0;
}