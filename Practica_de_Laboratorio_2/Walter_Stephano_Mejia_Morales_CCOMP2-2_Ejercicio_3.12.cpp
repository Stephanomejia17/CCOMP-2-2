#include <iostream>
#include <string>
#include "Walter_Stephano_Mejia_Morales_CCOMP2-2_Ejercicio_3.12.h"

using namespace std;

int main(){
    Date mydate;
    int theday;
    int themonth;
    int theyear;
    cout << "Introduce el dia: "; cin >> theday;
    cout << "Introduce el mes: "; cin >> themonth;
    cout << "Introduce el anio: ";cin >> theyear;
    if(themonth>12){
        themonth = 1;
    }
    if(themonth<0){
        themonth = 1;
    }
    mydate.setDate(theday, themonth, theyear);
    mydate.displayDate();
    return 0;
}