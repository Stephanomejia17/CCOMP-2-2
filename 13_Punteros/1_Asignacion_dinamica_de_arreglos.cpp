/*
Asignacion dinamica de arreglos

new: Reserva el numero de bytes solicitado por la declaracion
delete: Libera un bloque de bytes reservado con aterioridad

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico
*/

#include <iostream>
#include <stdlib.h> //Con esta funcion funciona new y delete
using namespace std;

void PedirNotas(); //Prototipo de funcion
void MostrarNotas();

int numCalif, *calif;

int main(){
    PedirNotas();
    MostrarNotas();

    delete[] calif; //Liberando el espacio en bytes utilizados anteriormente

    return 0;
}

void PedirNotas(){
    cout << "Digite el numero de calificaciones: ";
    cin >> numCalif;

    calif = new int[numCalif]; //Crear el arreglo

    for(int i = 0; i < numCalif; i++){
        cout << "Ingrese una nota: "; cin >> calif[i];
    } 

}
void MostrarNotas(){
    cout << "\n\nMostrando notas del Usuario:\n";
    for(int i = 0; i< numCalif; i++){
        cout << calif[i] << endl;
    }
}