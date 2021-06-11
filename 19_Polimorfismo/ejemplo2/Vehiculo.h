#ifndef __VEHICULO_H__
#define __VEHICULO_H__

#include <string>
/**
 * CLASE ABSTRACTA
 * toda las clases abstractas no puede tener instancias
 **/
class Vehiculo {
    protected:
        std::string placa;
        int anho;
        static int numVehiculos;
    public:
        Vehiculo(const std::string p, const int a) :
                placa(p), anho(a) {
                    ++numVehiculos;
                }
        const std::string getPlaca() const {
            return placa;
        }
        const int getAnho() const {
            return anho;
        }
        /**
        * FUNCIÓN VIRTUAL PURA
        **/
        virtual const std::string getData() const = 0;

        static int getNumVehiculos() {
            return numVehiculos;
        }
        ~Vehiculo(){
            --numVehiculos;
        }
};

#endif