#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>

template <typename T>
class Point;

template<typename T>
std::ostream& operator<<(std::ostream &output, const Point<T> &o){
    output << "(" <<o.x <<", "<< o.y << ")";
    return output;
}

template <typename T>
class Point {
    private:
        T x,y;
    public:
        Point() : x(0), y(0) {}
        Point(const T u, const T v): x(u), y(v){}
        friend std::ostream& operator<< <>(std::ostream &output, const Point<T> &o);
        T getX() const;
        T getY() const;


};

template<typename T>
T Point<T>::getX() const {
    return x;
}

template<typename T>
T Point<T>::getY() const {
    return y;
}




#endif