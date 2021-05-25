#ifndef __PUNTO_H__
#define __PUNTO_H__

#include <iostream>

class Punto{
    private:
        int x;
        int y;
    public:
        /**
        * Constructor: Funcion que se invoca automáticamente cuando se
        * reserva/asigna una instancia
        **/
        Punto(int _x = 0, int _y = 0) : x(_x), y(_y){
            std::cout << "Invocando al constructor" << std::endl;
        }
        /**
        * Destructor: Funcion que se invoca automáticamente cuando se
        * libero/desasigna memoria a una instancia
        **/

        ~Punto(){
            std::cout << "Invocando al destructor" << std::endl;
        }

        void setX(int x) {
            this->x = x; //this->: Sirve
        }
        void setY(int y) {
            this->y = y;
        }
        int getX() const { //Va a indicar que es una funcion de solo lectura
            return x;
        }
        int getY() const {
            return y;
        }
        void print(){
            std::cout << "(" << x <<"," << y << ")" << std::endl;
        }
};

#endif