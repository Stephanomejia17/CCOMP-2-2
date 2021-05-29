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

    Carro c("ert-987", 2020, "Sedan");
    Camion c2("wer-654", 2000, 200);

    DynamicArray da;
    da.push_back(&c);
    da.push_back(&c2);

    cout << da.getSize() << endl;

    return 0;
}