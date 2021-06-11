#ifndef __CARRO_H__
#define __CARRO_H__

#include <string>
#include "Vehiculo.h"

class Carro : public Vehiculo {
        std::string tipo;
    public:
        Carro();
        Carro(const std::string p, const int a, const std::string t) 
                : Vehiculo(p,a), tipo(t){}
        const std::string getTipo() const {
            return tipo;    
        }
        // Overriding del método getData
        const std::string getData() const {
            return "CARRO: " + std::to_string(anho) + " " + placa + ": " + tipo;
        }

};

#endif