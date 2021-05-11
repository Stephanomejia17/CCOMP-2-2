/*Punteros - Declaración de punteros
&n = La dirección de n
*n =La variable cuya direccion esta almacenada en n 
*/

#include <iostream>
using namespace std;

int main(){
    int num, *dir_num; 

    num = 20;
    dir_num = &num;

//sin punteros
    cout << "Numero: " << num << endl;
    cout << "Direccion de mem: " << &num << endl;

//con punteros
    cout << "Numero: " << *dir_num << endl;
    cout << "Direccion de mem: " << dir_num << endl;

    return 0;
}