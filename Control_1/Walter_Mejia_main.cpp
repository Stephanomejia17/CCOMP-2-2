#include <iostream>
#include <string>
#include "Waler_Mejia_Empleado.h"
using namespace std;
int main(){
    Empleado e1 ("Walter", 18);
    e1.getNombre();
    e1.getEdad();
    
    Empleado e2;
    e2.getNombre();
    e2.getEdad();

    e1.setNombreEdad("Alberto", 38);
    e1.getNombre();
    e1.getEdad();

    e2.setNombreEdad("Henry", 64);
    e2.getNombre();
    e2.getEdad();
}