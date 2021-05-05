#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,2,4,6,7,9,7};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; //es quievalente a poner => int *ptr = &arr[0]

    while(tam--){
        cout << *ptr++ << " ";
    }
    cout << endl;
}