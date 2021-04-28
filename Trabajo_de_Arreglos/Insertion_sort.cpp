#include <iostream>

using namespace std;
//Recursivo
int Insertion_sort_R(){
    
}




//Iterativo
int Insertion_sort_I(int arr[],int tam, int i = 0, int pos = 0, int aux=0){
    for(i; i < tam; i++){
        pos = i;
        aux = arr[i];
        while((pos > 0) && arr[pos-1] > aux){
            arr[pos] = arr[pos-1];
            pos--;
        }
        arr[pos] = aux;
    }
    return 0;
}

int main(){
    int numeros[5]={4,2,3,1,5}; 
    int i = 0;
    Insertion_sort_I(numeros, 5);
    for(i;i<5;i++){
        cout << numeros[i] << " ";
    }
}