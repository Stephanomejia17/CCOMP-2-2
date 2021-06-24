#include <iostream>
#include "Moneda.h"

using namespace std;

int main() {
    Moneda m1(3,50);
    Moneda m2(5,80);

    Moneda m3 = m2 + m1;

    cout << m3 << endl;

    return 0;
}