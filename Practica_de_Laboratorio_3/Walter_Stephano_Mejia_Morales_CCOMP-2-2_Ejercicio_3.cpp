//Implemente un programa que imprima los n numeros de loa secuencia de fibonacci
// 0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5… hasta 13 + 21 = 34…
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, c=0, b=0, a= 1;
    cout << "Ingrese un numero: "; cin >> n;
    while(n>c){
        int m = a + b; // 0+1
        a = b; //a=1
        b = m; // b= 1
        cout << m << " "; //1
        c += 1;
    }
}