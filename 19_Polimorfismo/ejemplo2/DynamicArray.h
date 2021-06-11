#ifndef __DynamicArray_H__
#define __DynamicArray_H__

#include "Vehiculo.h"

class DynamicArray {
        int size;
        Vehiculo **data;

        void resize(int newSize);
    public:
        DynamicArray();
        DynamicArray(Vehiculo* arr[], int size);
        DynamicArray(const DynamicArray &o);

        int getSize() const;
        void print() const;

        void push_back(Vehiculo* elem);
        void insert(Vehiculo* elem, int pos);
        void remove(int pos);

        void clear();

        ~DynamicArray();
};

#endif