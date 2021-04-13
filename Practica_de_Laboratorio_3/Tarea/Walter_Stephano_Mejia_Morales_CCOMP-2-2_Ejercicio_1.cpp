#include <iostream>
using namespace std;

int primos(int M){
    int num = 1;
    for(num; num <= M; num++){
        int x = 1;
        int contador = 0;
        for(x; num >= x; x++){
            if(num%x == 0){
                contador += 1;
            }
        }
        if(contador == 2){
            cout << num << endl;
        }
    }
}

int main(){
    int x = 50;
    int y = 45;
    int m = primos(x);
    return 0;
}