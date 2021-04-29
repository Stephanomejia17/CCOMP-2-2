#include <iostream>
#include <string>
using namespace std;


class Empleado{
    private:
        string nombre;
        int edad;
    public:
        Empleado(string, int);
        Empleado();
        void setNombreEdad(string, int);
        string getNombre();
        int getEdad();


};
Empleado::Empleado(){
    nombre = "";
    edad = 0;
}
Empleado::Empleado(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Empleado::setNombreEdad(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}
string Empleado::getNombre(){
    return nombre;
}
int Empleado::getEdad(){
    return edad;
}
