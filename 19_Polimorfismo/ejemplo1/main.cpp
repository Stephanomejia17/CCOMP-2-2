#include<iostream>
#include "Vehiculo.h"
#include "Carro.h"
#include "Camion.h"

using namespace std;

void imprimirDatos(Vehiculo *v){
    cout << v->getData() << endl;
}

int main() {

    Carro c("ert-987", 2020, "Sedan");
    Camion c2("wer-654", 2020, 200);
    Vehiculo *arr[] = {&c, &c2};
    for(Vehiculo *ptr : arr){
        imprimirDatos(ptr);
    }


    return 0;
}