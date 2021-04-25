/**(Distancia entre puntos) Escriba la función de distancia que calcula la distancia entre dos puntos 
(x1, y1) y (x2, y2). Todos los números y valores devueltos deben ser de tipo double.**/

#include <iostream>
#include <math.h>

using namespace std;

class Punto{
    public:
        int x;
        int y;
        Punto(int, int);
        void getPunto();
};

Punto::Punto(int _x, int _y){
    x = _x;
    y = _y;
}

void Punto::getPunto(){
    cout << "(" << x << ", " << y << ")" << endl;
}

double Distancia(int x, int y, int x1, int y1){
    double d = x-x1;
    double m = y-y1;

    cout << "(" << d << ", " << m << ")" << endl;

}

int main(){
    Punto p1(3,8);
    Punto p2(1,3);

    Distancia(p1.x, p1.y, p2.x, p2.y);



}


