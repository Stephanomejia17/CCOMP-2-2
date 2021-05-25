#ifndef __CARGADOR_H__
#define __CARGADOR_H__
#include <iostream>
#include <string.h>
#include "Celular.h"
using namespace std;

class Cargador{
    private:
        string name;
    public:
        Cargador(string n){
            name = n;
        }
        Cargador(string []);
        string getName(){
            return name;
        }
        void cargar(Celular cel){
            if(getName() == "Tipo estandar" && cel.getName() == "Motorola g8"){
                cout << "Lo siento, su celular [Motorola g8] no puede ser cargado por [Tipo estandar]" << endl;
            }
            else if(getName() == "Tipo estandar" && cel.getName() == "Samsung s5"){
                cout << "Correcto, su celular [Samsung s5] está cargado por [Tipo estandar]" << endl;
            }
            else if(getName() == "Tipo C" && cel.getName() == "Motorola g8"){
                cout << "Correcto, su celular [Motorola g8] está cargado por [Tipo C]" << endl;
            }
            else if(getName() == "Tipo C" && cel.getName() == "Samsung s5"){
                cout << "Lo siento, su celular [Samsung s5] no puede ser cargado por [Tipo C]" << endl;
            }
        }
};




#endif