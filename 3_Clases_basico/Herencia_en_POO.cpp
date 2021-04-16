#include <iostream>
#include <string>

using namespace std;


class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string, int);
        void mostrarPersona();
};

class Alumno : public Persona{
    private:
        string codigoAlumno;
        float notaFinal;
    public:
        Alumno(string, int, string, float);
        void mostrarAlumno();
};

//Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad){
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Alumno::mostrarAlumno(){
    mostrarPersona();
    cout << "Codigo de ALumno: " << codigoAlumno << endl;
    cout << "Nota Final: " << notaFinal << endl;
}

int main(){
    Alumno alumno1("Stephano", 18, "1595843", 19.5);
    alumno1.mostrarAlumno();
    return 0;
}