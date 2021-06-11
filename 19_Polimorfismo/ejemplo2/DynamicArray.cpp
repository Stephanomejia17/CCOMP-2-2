#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    this->size = 0;
    data = new Vehiculo*[0];
}

//TODO Para el martes 
DynamicArray::DynamicArray(Vehiculo* arr[], int size){
    this->size = size;
    data = new Vehiculo*[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

DynamicArray::DynamicArray(const DynamicArray &o) {
    this->size = o.size;
    this->data = new Vehiculo*[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

int DynamicArray::getSize() const {
    return size;
}

void DynamicArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

void DynamicArray::resize(int newSize) {
    Vehiculo** tmp = new Vehiculo*[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = data[i];
    delete [] data;
    size = newSize;
    data = tmp;
}

void DynamicArray::push_back(Vehiculo* elem) {    
    resize(size+1);
    data[size-1] = elem;
}

void DynamicArray::insert(Vehiculo* elem, int pos) {
    resize(size+1);
    
    for(int i = size-1; i > pos; i--)
        data[i] = data[i-1];
    
    data[pos] = elem;
} 

void DynamicArray::remove(int pos) {    
    for(int i = pos; i < size-1; i++)
        data[i] = data[i+1];

    resize(size-1);
}

void DynamicArray::clear() {    
    resize(0);
}

DynamicArray::~DynamicArray() {
    delete[] data;
}
