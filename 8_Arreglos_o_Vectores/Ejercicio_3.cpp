/**
 *Implementar una función que verifique si los elementos
 *de un arreglo de enteros representan un palindromo en forma recursiva
 **/
#include <iostream>

using namespace std;
int Palindromo(int arr[], int t){
    int x = 0, m = t-1;
    if(arr[0] != arr[m]){
        cout << "No es Palindromo";
    }
    else{
       Palindromo(arr,t-1);
       x+=1;
    }
}

int main(){
    int arreglo[5]={1,2,3,2,1};
    Palindromo(arreglo,5);
}
