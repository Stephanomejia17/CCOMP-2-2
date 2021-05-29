#include <string>
#include "Vehiculo.h"

class Camion : public Vehiculo {
        int capacidadCarga;
    public:
        Camion(const std::string p, const int a, const int capacidadCarga) 
                : Vehiculo(p,a){
                    this->capacidadCarga = capacidadCarga;
                }
        const int getCapacidadCarga() const {
            return this->capacidadCarga;
        }
        const std::string getData() const {
            return "CAMION: " + std::to_string(capacidadCarga) + 
                        "TN " + placa + ": " + std::to_string(anho) ;
        }
};
