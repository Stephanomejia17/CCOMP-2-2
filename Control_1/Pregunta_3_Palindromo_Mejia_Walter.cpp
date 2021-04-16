#include <iostream>

using namespace std;

int invertir(long n){
    int b = 0;

    while(n >0){
        b = b + n%10;
        b = b * 10;
        n = n/10;
    }
    return b/10;
}


int main(){
    int n;
    cout << "Ingrese un numero palindromo: "; cin >> n;
    if(invertir(n) == n){
        cout << "true";
    }
    else{
        cout << "false";
    }
}