/**
 *(Eliminación de duplicados con vector) Ejercicio de reimplementación 7.13 usando un vector. Empezar
 *con un vector vacío y use su función push_back para agregar cada valor único al vector.
 **/
#include <iostream>

using namespace std;

int push_back(int arr[]){
    for(int i = 0; i < 20; i++){
        cout << "Ingrese un numero entre 10 y 100: "; cin >> arr[i];
        if(arr[i] < 10 || arr[i] > 100){
            cout << "El numero ingresado no esta entre 10 y 100\n";
            break;
        }
        else{
            for(int m =0; m < i; m++){
                if(arr[i] == arr[m]){
                    arr[i] = 0;
                    cout << "El numero ingresado ya se encuentra en el arreglo\n";
                }
            }
        }
    }
    for(int i = 0; i<20; i++){
        cout << arr[i] << " ";
    }   
}


int main(){
    int array[5];
    push_back(array);
    return 0;
}
