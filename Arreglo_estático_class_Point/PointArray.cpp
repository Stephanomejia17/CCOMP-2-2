#include <iostream>
#include "PointArray.h"

using namespace std;

PointArray::PointArray(int size){
    data = new Punto[size];
    this->size = size;
}
PointArray::PointArray(const PointArray &o){
    size = o.size;
    data = new Punto[o.size];
    for(int i = 0; i < size; i++){
        data[i] = o.data[i];
    }
}
void PointArray::setAt(int index, Punto value){
    if(index >= 0 && index < size){
        data[index] = value;
    }
}
Punto PointArray::getAt(int index) const{
    if(index >= 0 && index < size){
        return data[index];
    }
}
int PointArray::getSize() const{
    return size;
}
void PointArray::print() const{
    Punto *tmp;
    tmp = data;
    cout << "[";
    for(int i = 0; i < size; i++){
        tmp->print();
        tmp++;
    }
    cout << "]" <<endl;
}
PointArray::~PointArray(){
    delete[] data;
}
