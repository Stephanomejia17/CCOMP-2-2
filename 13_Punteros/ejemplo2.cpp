#include <iostream>
using namespace std;
int main(){
    int arr[]={10,2,4,6,7,9,7};

    int *ptr = arr; //es equivalente a poner => int *ptr = arr[0]

    cout << "Contenido: "<<*ptr << endl;
    ptr++; //incrementa la posicion
    cout << "Contenido incrementado en 1: "<<*ptr << endl;

    return 0;
}