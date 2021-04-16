/**
 *  Escriba un programa que lea dos números y determine cuál de ellos es el 
 *  mayor.
 **/
#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x; 
    cin >> y;
    if(x > y)
        cout << "El mayo es: "<< x;
    else
        cout << "El mayo es: "<< y;

}