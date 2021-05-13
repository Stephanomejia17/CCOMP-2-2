/*
Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece
la vocal a, e ,i ,o ,u; en la cadena de caracters

Nota: Usar Punteros
*/

#include <iostream>
using namespace std;

char cadena[200];

void pedirCadena(){
    cout << "Digite una frase: "; cin.getline(cadena,30,'\n');
}
int conteoA(char *cadena){
    int cont = 0;

    while(*cadena){
        switch (*cadena){
            case 'A':
            case 'a': cont ++;
        }
        cadena++;
        
    }
    return cont;
}
int conteoE(char *cadena){
    int cont = 0;

    while(*cadena){
        switch (*cadena){
            case 'E':
            case 'e': cont ++;
        }
        cadena++;
    }
    return cont;
}
int conteoI(char *cadena){
    int cont = 0;

    while(*cadena){
        switch (*cadena){
            case 'I':
            case 'i': cont ++;
        }
        cadena++;
    }
    return cont;
}
int conteoO(char *cadena){
    int cont = 0;

    while(*cadena){
        switch (*cadena){
            case 'O':
            case 'o': cont ++;
        }
        cadena++;
    }
    return cont;
}
int conteoU(char *cadena){
    int cont = 0;

    while(*cadena){
        switch (*cadena){
            case 'U':
            case 'u': cont ++;
        }
        cadena++;
    }
    return cont;
}
int main(){

    pedirCadena();
    cout << "Veces que se repite A: " << conteoA << endl;
    cout << "Veces que se repite E: " << conteoE << endl;
    cout << "Veces que se repite I: " << conteoI << endl;
    cout << "Veces que se repite O: " << conteoO << endl;
    cout << "Veces que se repite U: " << conteoU << endl;

    return 0;
}
