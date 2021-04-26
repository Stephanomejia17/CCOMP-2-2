#include <iostream>

using namespace std;

int main(){
    int arr[]={2,4,3,5,1};
    int i, j, aux, minimo;
    for(i = 0; i < 5; i++){
        minimo = i;
        for (j = i+1; j<5; j++){
            if(arr[j] < arr[minimo]){
                minimo = j;
            }
        }
        aux = arr[i];
        arr[i] = arr[minimo];
        arr[minimo] = aux;
    }
    for(i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}