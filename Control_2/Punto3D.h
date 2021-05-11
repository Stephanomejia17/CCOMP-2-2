/*
Implemente la clase Punto3D, la cual tendrá como variables miembro 3 enteros que representen las coordenadas
en el espacio: x, y y z. Implemente dos constructores, uno sin argumentos que inicializa las variables miembro
en CERO, y otro que recibe 3 enteros e inicializa las variables miembro con dichos argumentos. Tambien 
funciones de acceso y modificación para cada una de las variables miembro y una función llamada print
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
#ifndef __PUNTO3D_H__
#define __PUNTO3D_H__

using namespace std;
class Punto3D{
    private:
        int x;
        int y;
        int z;
    public:
        Punto3D() : x(0), y(0), z(0){}
        Punto3D(int _x, int _y, int _z) : x(_x), y(_y), z(_z){}

        void setX(int _x){
            x = _x;
        }
        void setY(int _y){
            y = _y;
        }
        void setZ(int _z){
            z = _z;
        }
        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }
        int getZ() const{
            return z;
        }

        void print() const{
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }   
};


#endif