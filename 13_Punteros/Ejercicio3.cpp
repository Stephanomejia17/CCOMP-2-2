#include <iostream>
using namespace std;

int main(){
    int numeros[]={1,2,3,4,5};
    int *dir_numeros;

    //el nombre del array es un puntero que tiene la direccion de memoria del primer elemento en el array
    dir_numeros = numeros; 

    for(int i = 0; i < 5; i++){
        cout << "Elemento del vector [" <<i<<"]: " << *dir_numeros++ << endl;
    }
    for(int i = 0; i < 5; i++){
        cout << "Posiciones de memoria: " << dir_numeros++<<endl;
    }

    return 0;
}