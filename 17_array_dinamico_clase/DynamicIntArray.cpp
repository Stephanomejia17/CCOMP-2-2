#include "DynamicintArray.h"
#include <iostream>


DynamicIntArray::DynamicIntArray(){
    this->size=0;
    data = new int[0];
}

DynamicIntArray::DynamicIntArray(const int arr[], int size){
    this->size=size;
    data = new int[size];
    for(int i = 0; i < size; i ++){
        data[i] = arr[i];
    }
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray &o){
    this->size = o.size;
    this->data = new int[o.size];
    for(int i = 0; i < size; i ++){
        data[i] = o.data[i];
    }
}

int DynamicIntArray::getSize() const{
    return size;
}
void DynamicIntArray::print() const{
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        std::cout << data[i] << " ";
    }
    std::cout << "]" <<std::endl;
}
void DynamicIntArray::resize(int newSize) {
    int *tmp = new int[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = data[i];
    delete [] data;
    size = newSize;
    data = tmp;
}

void DynamicIntArray::push_back(int elem) {    
    resize(size+1);
    data[size-1] = elem;
}

void DynamicIntArray::insert(int elem, int pos) {
    resize(size+1);
    for(int i = size-1; i > pos; i--){
        data[i] = data[i-1];
    data[pos] = elem;
    }
} 

void DynamicIntArray::remove(int pos){
    for(int i = pos; i < size-1; i++){
        data[i] = data[i+1];
    }
    resize(size-1);
}
void DynamicIntArray::clear(){
    resize(0);
}
DynamicIntArray::~DynamicIntArray(){
    delete[] data;
}