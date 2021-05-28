#ifndef __DYNAMICINTARRAY_H__
#define __DYNAMICINTARRAY_H__

class DynamicIntArray {
    private:
        int size;
        int *data;
    public:
        DynamicIntArray();
        DynamicIntArray(const int arr[], int size);
        DynamicIntArray(const DynamicIntArray &o);

        int getSize() const;
        void print() const;
        void resize(int newSize);
        void resizeIn(int newSize, int elem, int pos);

        void push_back(int elem);
        void insert(int elem, int pos);
        void remove(int pos);
        void clear();
        ~DynamicIntArray();
};





#endif

