#ifndef __PUNTO_H__
#define __PUNTO_H__

class Punto{
    private:
        int x;
        int y;
    public:
        Punto(int _x = 0, int _y = 0) : x(_x), y(_y){}

        void setX(int _x) {
            x = _x;
        }
        void setY(int _y) {
            y = _y;
        }
        int getX() const { //Va a indicar que es una funcion de solo lectura
            return x;
        }
        int getY() const {
            return y;
        }
};






#endif