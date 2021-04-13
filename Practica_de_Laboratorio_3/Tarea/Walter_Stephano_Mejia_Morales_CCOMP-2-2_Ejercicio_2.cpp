#include <iostream>

using namespace std;

int perfectos(int M){
    int num = 1;
    for(num; num <= M; num++){
        int x = 1;
        int h = 0;
        for(x; x < num; x++){
            if(num % x == 0){
                h = h+x;
            }
        }
        if(h == num){
            cout << num << " ";
        }
    }
}

int main(){
    int a = 50;
    long b = 9000;
    perfectos(a);
    cout << endl;
    perfectos(b);
}