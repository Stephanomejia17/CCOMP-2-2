//Realice un programa que lea de la entrada estándar los siguientes datos 
//de una persona:
#include <iostream>
#include <string>

using namespace std;

int main(){
    string edad;
    char sexo;
    float altura;
    cout <<"Ingrese edad: "; cin >> edad;
    cout <<"Ingrese sexo: "; cin >> sexo;
    cout <<"Ingrese altura: "; cin >> altura;

    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
}