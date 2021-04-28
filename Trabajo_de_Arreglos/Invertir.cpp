#include <iostream>

using namespace std;
void Intercambio(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}
//Recursivo
void Invertir_R(int arr[], int tam, int i = 0){
    if(i >= tam-1){
        return;
    }
    Intercambio(arr[i], arr[tam-1]);
    Invertir_R(arr, --tam, ++i);
}
//Iterativo
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n[6];
    for(int i = m - 1; i >= 0; i--){
        n[5-i] = arr[i];
        cout << n[5-i] << " ";
    }
}
