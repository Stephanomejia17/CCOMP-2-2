#include <iostream>

using namespace std;
//Iterativo
bool Palindromo_I(int arr[], int tam, int i = 0){
    int j = tam - 1;
    while(i < j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++, j--;
    }
    return true;
}
//Recursivo
bool Palindromo_R(int arr[], int tam, int i = 0){
    if(arr[i] != arr[tam-1]){
        return false;
    }
    else if(i >= tam-1){
        return true;
    }
    else{
        return true && Palindromo_R(arr,--tam,++i);
    }
}

void esPal(bool x){
    if(x){
        cout << "Es palindromo\n";
    }
    else
        cout << "No es palindromo\n";
}

int main(){
    int arreglo[5] = {1,2,3,2,1};
    esPal(Palindromo_R(arreglo,5));
    esPal(Palindromo_I(arreglo, 5));
    int arr[6]={1,2,3,3,2,1};
    esPal(Palindromo_R(arr,6));
    esPal(Palindromo_I(arr, 6));
    int vector[6]={1,2,3,4,2,1};
    esPal(Palindromo_R(vector, 6));
    esPal(Palindromo_I(vector, 6));
}