#include <iostream>
#include "DynamicPointArray.h"

using namespace std;


int main(){
    Punto arr[] = {Punto(2,1), Punto(4,5)};
    int tam = sizeof(arr)/sizeof(arr[0]);
    cout << "Punto da: " << endl;
    DynamicPointArray da(arr, tam);
    da.print();
    cout << "Punto da2: " << endl;
    DynamicPointArray da2 = da;
    da2.print();
    cout << "Push Back: " << endl;
    da2.push_back(Punto(5,1));
    da2.print();
    cout << "Insert: " << endl;
    da2.insert(Punto(7,9),1);
    da2.print();
    cout << "Insert: " << endl;
    da2.insert(Punto(4,6),0);
    da2.print();
    cout << "Insert: " << endl;
    da2.insert(Punto(9,1),6);
    da2.print();
    cout << "Remove: " << endl;
    da2.remove(1);
    da2.print();
    return 0;
}