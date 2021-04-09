#include <iostream>

using namespace std;


//escriba un programa que solicite un número n e imprima la suma de los n numeros
int main(){
    int n;
    int i = 0;
    int resultado;
    cout << "Ingrese un numero: "; cin >> n;

    while(n > 0){
        i += n;
        n -= 1;
    }
    cout << i;

    if(n > 0)
    {
        resultado = (n*(n+1))/2;
        cout << resultado;
    }
    
}