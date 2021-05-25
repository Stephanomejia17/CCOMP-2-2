#include <iostream>
using namespace std;
/*
* Administracion dinamica de la memoria
* =====================================
* Operador 'new' = reserva/asigna memoria
* Operador 'delete' = libera/designa memoria
*/

int* fun(){
    int *a = new int;
    *a = 100;
    return a;
}
int main(){
    int *ptr;

    ptr = fun();
    cout << *ptr << endl;

    delete ptr;
    return 0;
}