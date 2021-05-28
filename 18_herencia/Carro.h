#ifndef __CARRO_H__
#define __CARRO_H__

#include <string>
#include "Vehiculo.h"

class Carro : public Vehiculo {
        std::string tipo;
    public:
        Carro(const std::string p, const int a, const std::string t) 
                : Vehiculo(p,a), tipo(t){}

        const std::string getTipo() const {
            return tipo;
        }
        //Haciendo Over riding del método getData
        const std::string getData() const{
            //to_string sirve para convertir el int en string
            return std::to_string(anho) + " " + placa + ": " + tipo;
        }

};

#endif