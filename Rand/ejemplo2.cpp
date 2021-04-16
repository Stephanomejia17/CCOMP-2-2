#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x, y=0, contador = 1;
    unsigned m;
    srand(static_cast<unsigned int>(time(0)));
    cout << "\ng----------------------------------------" << endl;
    cout << "Bienvenido al juego de adivina el numero" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Solo tienes 10 intentos" << endl;
    cout << "Si deseas salir digita el numero -1" << endl;
    cout << "----------------------------------------" << endl;

    m = 1 + rand()%100;
    for(y; y <= 10; y++){
        cout <<"Ingrese un numero: "; cin >> x;
        if(x == -1){
            break;
        }
        if(x > m){
            cout << "Menor\n";
        }
        if(x < m){
            cout << "Mayor\n";
        }
        if(x == m){
            cout << "Bien hecho! Lo lograste en " << contador << " intentos";
            break;
        }
        contador += 1;
    }
}