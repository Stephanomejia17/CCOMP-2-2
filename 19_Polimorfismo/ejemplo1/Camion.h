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
        const std::string getData() const{
            //to_string sirve para convertir el int en string
            return "Camion: " + to_string(CapacidadCarga) + "TN" + placa + ": " + to_string(anho);
        }

};      


#endif