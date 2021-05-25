#include <iostream>
#include "PointArray.h"

using namespace std;

int main(){
    PointArray a(2);

    a.setAt(0, Punto(3,4));
    a.setAt(1,Punto(5,1));

    a.print();

    if(true) {
        PointArray b = a;
        b.print();
    }
    
    
    
    return 0;
}