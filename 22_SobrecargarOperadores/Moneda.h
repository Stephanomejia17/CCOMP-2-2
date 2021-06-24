#ifndef __MONEDA_H__
#define __MONEDA_H__

#include <iostream>

class Moneda {
        int soles;
        int centimos;
    public:        
        Moneda(int _moneda, int _centimos);
        ~Moneda();

        Moneda operator+(const Moneda o);
        Moneda operator-(const Moneda o);
        friend std::ostream& operator<<(std::ostream &output, const Moneda &o);
};
Moneda::Moneda(int _soles, int _centimos) {
    soles = _soles;
    centimos = _centimos;
}

Moneda::~Moneda(){
}

Moneda Moneda::operator+(const Moneda o){
    Moneda tmpMon(0, 0);
    tmpMon.centimos = centimos + o.centimos;
    tmpMon.soles = soles + o.soles;
    if(tmpMon.centimos >= 100) {
        tmpMon.soles += 1;
        tmpMon.centimos -= 100;
    }

    return tmpMon;
}

std::ostream& operator<<(std::ostream &output, const Moneda &o) {
    output << "S/. " << o.soles << "." << o.centimos << " nuevos soles";
    return output;
}

#endif
