//Implementar una función que invierta los elementos de un arreglo
#include <iostream>

using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n[6];
    for(int i = m - 1; i >= 0; i--){
        n[5-i] = arr[i];
        cout << n[5-i] << " ";
    }
}