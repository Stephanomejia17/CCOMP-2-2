#include<iostream>
#include "DynamicArray.h"
#include "Vehiculo.h"
#include "Carro.h"
#include "Camion.h"

using namespace std;

void imprimirDatos(Vehiculo *v) {
    cout << v->getData() << endl;
}

int main() {

    Carro car1("ert-987", 2020, "Sedan");
    Camion cam1("wer-654", 2018, 200);
    Carro car2("ert-987", 2020, "Sedan");
    Camion cam2("wer-654", 2019, 200);
    Carro car3("ert-987", 2020, "Sedan");
    Camion cam3("wer-654", 2020, 200);

    DynamicArray da;
    da.push_back(&car1);
    da.push_back(&cam1);

    da.insert(&car2, 0);
    da.insert(&car3, 1);

    da.push_back(&cam2);
    da.push_back(&cam3);

    Carro arr[5];

    cout << da.getSize() << endl;

    return 0;
}