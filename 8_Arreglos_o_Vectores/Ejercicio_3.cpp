/**
 *Implementar una función que verifique si los elementos
 *de un arreglo de enteros representan un palindromo en forma recursiva
 **/
#include <iostream>

using namespace std;
bool ispal(int arr[], int tam, int i = 0){
    if(arr[i] != arr[tam-1]){
        return false;
    }
    else if(i >= tam-1){
        return true;
    }
    else{
        return true && ispal(arr,--tam,++i);
    }
}
void Pal(bool x){
    if(x){
        cout << "Es palindromo\n";
    }
    else
        cout << "No es palindromo\n";
}

int main(){
    int arreglo[5] = {1,2,3,2,1};
    Pal(ispal(arreglo,5));
    int arr[6]={1,2,3,3,2,1};
    Pal(ispal(arr,6));
    int vector[6]={1,2,3,4,2,1};
    Pal(ispal(vector, 6));
}