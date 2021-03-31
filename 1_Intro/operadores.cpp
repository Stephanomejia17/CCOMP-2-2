#include <iostream>

int main() {
    int number1;
    int number2;
    int number3;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> number1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> number2;

    std::cout << "Ingrese el tercer numero: ";
    std::cin >> number3;

    int operacion = ((number3 - number2) * number1 + number2 / number1) % number3;

    std::cout << "El resultado es: " << operacion << std::endl;

    return 0;
}