#include<iostream>
#include "Vehiculo.h"
#include "Carro.h"
#include "Camion.h"

using namespace std;

int main() {

    Vehiculo v("ftr-654", 2019);
    Carro c("ert-987", 2020, "Sedan");
    Camion c2("wer-654", 2020, 200);

    cout << v.getData() << endl;
    cout << c.getData() << endl; 
    cout << c2.getData() << endl;

    return 0;
}