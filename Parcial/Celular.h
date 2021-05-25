#ifndef __CELULAR_H__
#define __CELULAR_H__

#include <iostream>
#include <string.h>
using namespace std;

class Celular{
    private:
        string name;
    public:
        Celular(string n){
            name = n;
        }
        string getName(){
            return name;
        }
        Celular(string []);
};


#endif