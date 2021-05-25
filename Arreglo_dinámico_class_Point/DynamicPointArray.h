//Implementar un arreglo estatico y arreglo dinamico 
//de la clase point
#ifndef __DYNAMICPOINTARRAY_H__
#define __DYNAMICPOINTARRAY_H__
#include <iostream>
#include "Punto.h"

class DynamicPointArray{
    private:
        int size;
        Punto *data;
    public:
        DynamicPointArray();
        DynamicPointArray(const Punto arr[], int size);
        DynamicPointArray(const DynamicPointArray &o);

        int getSize();
        void print();

        void push_back(Punto elem);
        void insert(Punto elem, int pos);
        void remove(int pos);
        ~DynamicPointArray();


};




#endif