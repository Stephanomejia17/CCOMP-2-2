#ifndef __VEHICULO_H__
#define __VEHICULO_H__

#include <string>

class Vehiculo {
    protected:
        std::string placa;
        int anho;
    public:
        Vehiculo(const std::string p, const int a) :
                placa(p), anho(a) {}

        const std::string getPlaca() const {
            return placa;
        }

        const int getAnho() const {
            return anho;
        }

        const std::string getData() const {
            return placa + " de " +  std::to_string(anho);
        }
};

#endif