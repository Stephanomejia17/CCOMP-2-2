/**
 * Construya una clase llamada Rectángulo que tenga los
 * siguientes atributos: largo y ancho, y los siguientes 
 * métodos: perímetro() y área()
**/
#include <iostream>
#include <ctime>

using namespace std;

//Hora
class Tiempo{
    private:
        int horas, minutos, segundos;
    public:
        Tiempo(int, int, int);
        Tiempo(long);
        void imprimir_tiempo();

};
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}
Tiempo::Tiempo(long tiempo){ //tiempo = 203530
    horas = tiempo/10000; // 20.3530 como es int vota 20
    minutos = (tiempo - horas*10000)/100; // 35.30 como es int vota 35
    segundos = tiempo -(horas*10000+minutos*100);
}
void Tiempo::imprimir_tiempo(){
    cout << "La hora es: " << horas << ":" << minutos << ":" << segundos << endl;
}

//Rectangulo
class Rectangulo{
    private: //atributos
        int largo;
        int ancho;
    public: //metodos
        Rectangulo( int, int); //recibe el valor de los atributos
        void perimetro();
        void area();
};
Rectangulo::Rectangulo(int _largo, int _ancho){
    largo = _largo;
    ancho = _ancho;
}
void Rectangulo::perimetro(){
    cout << "Perimetro: " << largo*2+ancho*2 << endl;
}
void Rectangulo::area(){
    cout << "Area: " <<largo*ancho << endl; 
}
int main(){
    Rectangulo r1(5, 2);
    r1.perimetro();
    r1.area();
    Tiempo t1(20,35,30);
    Tiempo t2(203530);
    t1.imprimir_tiempo();
    t2.imprimir_tiempo();
}