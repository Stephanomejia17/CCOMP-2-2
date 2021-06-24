#ifndef __DynamicArray_H__
#define __DynamicArray_H__

template <typename T>
class DynamicArray;

template <typename T>
std::ostream& operator<<(std::ostream &output, const DynamicArray<T> &o) {
    output <<"[";
    for(int i = 0 ;i < o.size; i++) {
        output <<o.data[i] << ", ";
    }
    output << "]";
    return output;
}

template <typename T>
class DynamicArray {
        int size;
        T *data;
        DynamicArray<T> *ptrDynamic;

        void resize(int newSize);
    public:
        DynamicArray();
        DynamicArray(const T arr[], int size);
        DynamicArray(const DynamicArray &o);

        int getSize() const;
        void print() const;

        void push_back(const T elem);
        void insert(const T elem, int pos);
        void remove(int pos);

        void clear();

        ~DynamicArray();
        friend std::ostream& operator<< <>(std::ostream &output, const DynamicArray<T> &o);
};

template <typename T>
DynamicArray<T>::DynamicArray() {
    this->size = 0;
    data = new T[0];
}

template <typename T>
DynamicArray<T>::DynamicArray(const T arr[], int size){
    this->size = size;
    data = new T[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray<T> &o) {
    this->size = o.size;
    this->data = new T[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

template <typename T>
int DynamicArray<T>::getSize() const {
    return size;
}

template <typename T>
void DynamicArray<T>::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

template <typename T>
void DynamicArray<T>::resize(int newSize) {
    T *tmp = new T[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = data[i];
    delete [] data;
    size = newSize;
    data = tmp;
}

template <typename T>
void DynamicArray<T>::push_back(const T elem) {    
    resize(size+1);
    data[size-1] = elem;
}

template <typename T>
void DynamicArray<T>::insert(const T elem, int pos) {
    resize(size+1);
    
    for(int i = size-1; i > pos; i--)
        data[i] = data[i-1];
    
    data[pos] = elem;
} 

template <typename T>
void DynamicArray<T>::remove(int pos) {    
    for(int i = pos; i < size-1; i++)
        data[i] = data[i+1];

    resize(size-1);
}

template <typename T>
void DynamicArray<T>::clear() {    
    resize(0);
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] data;
}



#endif
