/**
Escriba un programa que lea tres números y determine cuál de ellos es el 
mayor.
**/


#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x; 
    cin >> y;
    cin >> z;
    if(x > y && x > z)
        cout << "El mayo es: "<< x;
    if(x < y && y > z)
        cout << "El mayo es: "<< y;
    else
        cout << "El mayor es: " << z;
}