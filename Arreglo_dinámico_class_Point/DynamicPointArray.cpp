#include "DynamicPointArray.h"
#include <iostream>

using namespace std;

DynamicPointArray::DynamicPointArray(){
    this->size=0;
    data = new Punto[0];
}
DynamicPointArray::DynamicPointArray(const Punto arr[], int size){
    this->size = size;
    data = new Punto[size];
    for(int i = 0; i < size; i++){
        data[i] = arr[i];
    }
}
DynamicPointArray::DynamicPointArray(const DynamicPointArray &o){
    this->size = o.size;
    this->data = new Punto[o.size];
    for(int i = 0; i < size; i ++){
        data[i] = o.data[i];
    }
}
int DynamicPointArray::getSize(){
    return size;
}
void DynamicPointArray::print(){
    Punto *tmp;
    tmp = data;
    cout << "[";
    for(int i = 0; i < size; i++){
        tmp->print();
        tmp++;
    }
    cout << "]" <<endl;
}
void DynamicPointArray::push_back(Punto punto){
    Punto *tmp = new Punto[size+1];
    for(int i = 0; i < size; i++){
        tmp[i] = data[i];
    }
    tmp[size] = punto;
    size +=1;
    delete [] data;
    data = tmp;
}
void DynamicPointArray::insert(Punto elem, int pos){
    Punto *tmp = new Punto[size+1];
    for(int i = 0, j = 0; i < size; i++, j++){
        if(j == pos){
            tmp[pos] = elem;
            i--;
        }
        else{
            tmp[j] = data[i];
        }
    }
    size +=1;
    delete[] data;
    data = tmp;
}
void DynamicPointArray::remove(int pos){
    Punto *tmp = new Punto[size-1];
    for(int i = 0, j = 0; j < size; i++, j++){
        if(pos != j){
            tmp[i] = data[j];
        }
        else{
            i--; continue;
        }

    }
    size -= 1;
    delete []data;
    data = tmp;
}

DynamicPointArray::~DynamicPointArray(){
    delete[] data;
}