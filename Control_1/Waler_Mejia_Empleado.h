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
        void getNombre();
        void getEdad();


};
Empleado::Empleado(){
    string _nombre;
    int _edad;
    _nombre = "";
    _edad = 0;
    nombre = _nombre;
    edad = _edad;
}
Empleado::Empleado(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Empleado::setNombreEdad(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}
void Empleado::getNombre(){
    cout << "Nombre: " << nombre << endl;
}
void Empleado::getEdad(){
    cout << "Edad: " << edad << endl;
}
