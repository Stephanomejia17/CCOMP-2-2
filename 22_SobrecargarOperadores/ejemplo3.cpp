#include<iostream>
#include<string>
#include "Point.h"
#include "DynamicArray.h"

using namespace std;

int main() {
    // arreglo dinámico de enteros
    //DynamicArray(const T arr[], int size);
    const int arreglo[]={1,2,3};
    DynamicArray<int> arregloEnteros(arreglo, 3) ;
    cout<<arregloEnteros.getSize();
    arregloEnteros.push_back(4);
    cout<<arregloEnteros.getSize();
    
    //arregloEnteros.

    // arreglo dinámico de decimales
    float arr[] = {1.2,3.5,4.7};
    DynamicArray<float> m(arr, 3);
    m.print();

    // arreglo dinámico de strings
    string arre[] = {"1", "6", "8", "10"};
    DynamicArray<string> lecarr(arre, 4);
    
    Point<int> p(4,5);
    cout << p << endl;

    //Crear un arreglo dinamico de points
    Point<int> array[] = {Point<int>(2,1), Point<int>(4,6)};
    Point<int> *arrayPtr = array;
    int u = sizeof(array)/sizeof(array[0]);

    //imprimir Point array
    for(; arrayPtr < array + u; arrayPtr++){
        cout << *arrayPtr << " ";
    }


    DynamicArray<Point<int>> w(array,2);
    //Sobrecargar el op de salida para Dynamic y Point
    cout << w;
    
    return 0;
}