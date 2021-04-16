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

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}
void Persona::mostrarPersona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

class Empleado : public Persona{
    private:
        int horasTrabajo;
    public:
        Empleado(string, int, int);
        void mostrarEmpleado();
};

Empleado::Empleado(string _nombre, int _edad, int _horasTrabajo) : Persona(_nombre, _edad){
    horasTrabajo = _horasTrabajo;
}

void Empleado::mostrarEmpleado(){
    cout << "\nEmpleado: "<< endl;
    mostrarPersona();
    cout << "Horas de trabajo: " << horasTrabajo << " horas" << endl;
}

class Estudiante : public Persona{
    private:
        int totaldeCursos;
    public:
        Estudiante(string, int, int);
        void mostrarEstudiante();
};

Estudiante::Estudiante(string _nombre, int _edad, int _totaldeCursos) : Persona(_nombre, _edad){
    totaldeCursos = _totaldeCursos;
}

void Estudiante::mostrarEstudiante(){
    cout << "\nEstudiante: "<< endl;
    mostrarPersona();
    cout << "Total de Cursos: " << totaldeCursos << endl;
}

class Universitario : public Estudiante{
    private:
        long codigoUniversitario;
    public:
        Universitario(string, int, int, long);
        void mostrarUniversitario();
};

Universitario::Universitario(string _nombre, int _edad, int _totaldeCursos, long _codigoUniversitario) : Estudiante(_nombre, _edad, _totaldeCursos){
    codigoUniversitario = _codigoUniversitario;
}

void Universitario::mostrarUniversitario(){
    cout << "\nUniversitario: " << endl;
    mostrarEstudiante();
    cout << "Codigo de Universitario: " << codigoUniversitario;
}

int main(){
    Empleado empleado1("Stephano", 18, 8);
    empleado1.mostrarEmpleado();
    Estudiante estudiante1("Stephano", 18, 5);
    estudiante1.mostrarEstudiante();
    Universitario universitario1("Stephano", 18, 5, 1564984);
    universitario1.mostrarUniversitario();


    return 0;
}