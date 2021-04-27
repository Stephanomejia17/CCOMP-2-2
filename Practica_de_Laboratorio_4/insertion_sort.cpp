#include <iostream>

using namespace std;

int main(){
    int numeros[5]={4,2,3,1,5}; //{2,4,3,1,5}
    int i, pos, aux;

    for(i=0; i<5; i++){
        pos = i;//0
        aux = numeros[i];//3

        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout << "Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout << numeros[i] << " ";
    }
    cout <<"\n";
    cout << "Orden Descendente: ";
    for(i=4;i>=0;i--){
        cout << numeros[i] << " ";
    }
    return 0;
}