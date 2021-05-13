/*
Ejercicio 7: Pedir su nombre al usuario y devolver el numero de vocales que hay
Nota: Recuerda que debes utilizar punteros
*/

#include <iostream>
using namespace std;

//Prototipo de funcion
void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main(){
    pedirDatos();
    cout << "\nEl numero de vocales del nombre es: " << contandoVocales(nombreUsuario) << endl;
    
    return 0;
}

void pedirDatos(){
    cout << "Digite su nombre: ";
    cin.getline(nombreUsuario,30,'\n');

}
int contandoVocales(char *nombre){
    int cont=0;

    while(*nombre){//mientras nombre no sea nulo '\0'
        switch(*nombre){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u': cont++;
        }
        nombre++;
    }

    return cont;
}   