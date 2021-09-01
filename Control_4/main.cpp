#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "DynamicArray.h"

using namespace std;

void printPolygons( Polygon *p) {
    cout << p->area() << endl;
}

int main() {
    Triangle *t1 = new Triangle(3,4);
    Triangle *t2 = new Triangle(4,4);

    Rectangle *r1 = new Rectangle(5,5);
    Rectangle *r2 = new Rectangle(6,5);
    Rectangle *r3 = new Rectangle(7,5);

    Polygon **arr = new Polygon*[5];
    arr[0] = t1; 
    arr[1] = t2; 
    arr[2] = r1; 
    arr[3] = r2; 
    arr[4] = r3; 

    DynamicArray<Polygon*> da(arr, 5);
    cout << da << endl;

    for (size_t i = 0; i < 5; i++)
    {
        printPolygons(arr[i]);
    }
    

    delete []arr;
    delete t1;
    delete t2;
    delete r1;
    delete r2;
    delete r3;

    return 0;
}