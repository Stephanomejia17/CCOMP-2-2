#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__
#include "Punto.h"
class PointArray{
    private:
        int size;
        Punto *data;

    public:
        PointArray(int size);
        PointArray(const PointArray &o);
        void setAt(int index, Punto value);
        Punto getAt(int index) const;
        int getSize() const;
        void print() const;

        ~PointArray();
};








#endif