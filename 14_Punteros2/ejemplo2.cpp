#include <iostream>
using namespace std;
/*
* Administracion dinamica de la memoria
* =====================================
* Operador 'new' = reserva/asigna memoria
* Operador 'delete' = libera/designa memoria
*/

int* fun(){

}
int main(){
    int num;
    cin >> num;

    int *arr = new int[num];

    for(int i = 0; i < num; i++){
        cout << "Ingrese valor " << i << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }


    delete []arr; //como arr es un arreglo se anteponen unos corchetes
    return 0;
}