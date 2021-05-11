/*
Implemente la clase Punto3D, la cual tendrá como variables miembro 3 enteros que representen las coordenadas
en el espacio: x, y y z. Implemente dos constructores, uno sin argumentos que inicializa las variables miembro
en CERO, y otro que recibe 3 enteros e inicializa las variables miembro con dichos argumentos. Tambien 
funciones de acceso y modificación para cada una de las variables miembro y una función llamada print el 
la cual debe imprimir el punto en el siguiente formato: (3, 5, 9). ESTO DEBE SER IMPLEMENTADO EN UN ARCHIVO 
HEADER (.h)

Implemente el archivo main.cpp en el cual:

Debe implementar una función imprimirPuntos que reciba un arreglo de tipo Punto3D y su tamaño y 
    debe imprimir dicho arreglo USANDO PUNTEROS.

Debe implementar dentro de la función principal lo siguiente:
    Debe crear un arreglo de tipo Punto3D de tamaño 5.
    Crear un bucle para imprimir los puntos de dicho arreglo.
    Crear otro bucle para modificar los puntos usando la función de modificación de la clase.
    Crear un puntero de tipo Punto3D y hacer que apunte al último elemento del arreglo.
    Crear un bucle para recorrer e imprimir los elementos del arreglo desde el último elemento hasta 
    el primero USANDO UNICAMENTE EL PUNTERO.
    Modificar los puntos usando el puntero.

Debe: 
    Explicar su solución en la caja de texto.
    Subir dos archivos de código fuente con el siguiente formato en el nombre: 
    PREGUNTA_4_CLASE_APELLIDOS_NOMBRE.cpp
    Punto3D_APELLIDOS_NOMBRE.h
*/

#include <iostream>
#include "Punto3D.h"

using namespace std;

int imprimirPuntos(const Punto3D *arr, int tam){
    while(tam--){
        arr->print();
        arr++;
    }
    cout << endl;
}

int main(){
    Punto3D arr[5];
    int tam = sizeof(arr)/sizeof(arr[0]);

    imprimirPuntos(arr, tam);

    int cont = tam;
    while(cont--){
        arr[cont].setX(cont);
        arr[cont].setY(tam);
        arr[cont].setZ(6);
    }
    Punto3D *ptr = arr;

    imprimirPuntos(arr, tam);

    cont = tam;
    while(cont--){
        ptr->setX(tam);
        ptr->setY(cont);
        ptr->setZ(10);
        ptr++;
    }

    imprimirPuntos(arr, tam);

    return 0;
}