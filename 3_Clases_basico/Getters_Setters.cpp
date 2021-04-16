#include <iostream>
using namespace std;

class Punto{
    private:
        int x, y;
    public:
        Punto();
        void setPunto(int, int);
        int getPuntoX(); // el valor de get se asigna por el valor de los atributos
        int getPuntoY();
};

Punto::Punto(){
}

void Punto::setPunto(int _x, int _y){
    x = _x;
    y = _y;
}

int Punto::getPuntoX(){
    return x;
}
int Punto::getPuntoY(){
    return y;
}

int main(){
    Punto punto1;

    punto1.setPunto(15,10);
    cout << punto1.getPuntoX() << endl;
    cout << punto1.getPuntoY() << endl;    

    return 0;
}