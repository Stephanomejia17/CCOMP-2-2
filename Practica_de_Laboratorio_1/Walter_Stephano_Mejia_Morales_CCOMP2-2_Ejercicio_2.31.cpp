#include <iostream>
using namespace std;

int main(){
    float TMDPD; //Total de millas conducidas por día      13 millas
    float CPGOG; //Costo por galón de gasolina             5.25 soles
    float AMPD; //Promedio de millas por galón             1 galon rinde 1.201 millas
    float PFPD; //Costo de parqueo por día                 2 soles
    float TPD; //Peaje por día                             10 soles

    cout << "Introduzca el total de millas conducidas por dia: "; cin >> TMDPD;
    cout << "Introduzca el costo por galon de galolina: "; cin >> CPGOG;
    cout << "Introduzca el Promedio de millas por galon: "; cin >> AMPD;
    cout << "Introduzca el costo de parqueo por dia: "; cin >> PFPD;
    cout << "Introduzca el costo de peaje por dia: "; cin >> TPD;

    float millasxgalon = TMDPD/1.201;
    float costoxgalon = millasxgalon*5.25;
    float parqueoYpeaje = PFPD + TPD;

    float Total = costoxgalon + parqueoYpeaje;


    cout << "Total: " << Total << endl;
    cout << "Con Car-pool te ahorras por 2 personas en el auto " << Total-(Total/2) << " soles!" << endl;
    cout << "Con Car-pool te ahorras por 3 personas en el auto " << Total-(Total/3) << " soles!" << endl;
    cout << "Con Car-pool te ahorras por 4 personas en el auto " << Total-(Total/4) << " soles!" << endl;

    return 0;
}