#ifndef __CAMION_H__
#define __CAMION_H__
#include <string>
#include "Vehiculo.h"
using namespace std;

class Camion : public Vehiculo{
    private:
        int CapacidadCarga;
    public:
        Camion(const string p, const int a, const int t) 
                : Vehiculo(p,a), CapacidadCarga(t){}
        const int getCapacidadCarga() const{
            return CapacidadCarga;
        }
        const string getData() const {
            return to_string(anho) + " " + placa + ": " + to_string(CapacidadCarga);
        }

};      


#endif