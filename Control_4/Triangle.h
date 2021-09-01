#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include "Polygon.h"

class Triangle : public Polygon {
    public:
        Triangle(int a, int b):Polygon(a, b){}

        int area() {
            return width * height / 2;
        }
};


#endif