#include <iostream>
#include <string.h>
#include "Celular.h"
#include "Cargador.h"
using namespace std;

int main(){

    Celular g8("Motorola g8");
    Celular s5("Samsung s5");

    Cargador cs("Tipo estandar");
    Cargador cc("tipo C");

    Celular arrCelular[]={g8,s5,s5,g8};
    Cargador arrCargador[]={cs,cs,cc,cc};

    int tam = sizeof(arrCelular) / sizeof(arrCelular[0]);

    Celular *ptrCel = arrCelular;
    Cargador *ptrCargador = arrCargador;

    while(tam--){
        ptrCargador->cargar(*ptrCel);
        ptrCel++;
        ptrCargador++;
    }

    return 0;

}