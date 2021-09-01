#include "Fraction.h"
#include <iostream>
/*
 Sobrecargue los operadores: <<, ==, !=, y * para la clase Fraction, de tal forma que para el siguiente código: 
 (suba el código: Fraction.h (implementación y declaración de la clase) y main.cpp (uso de la clase))

 Salida:
    0
    1
    3/8 * 1/2 = 3/16
    1/2 * 5/1 = 5/2
    2 * 3/8 = 3/4
*/

int main(){
    Fraction f1(3,8), f2(1,2), f3(10,2);
    std::cout << (f1 == f2) << '\n';
    std::cout << (f1 != f2) << '\n';
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n'
                << f2 << " * " << f3 << " = " << f2*f3 << '\n'
                << 2 << " * " << f1 << " = " << 2 * f1 << '\n';
}