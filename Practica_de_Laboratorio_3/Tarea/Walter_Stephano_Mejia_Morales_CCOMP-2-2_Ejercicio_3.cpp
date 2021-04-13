#include <iostream>

using namespace std;

int fibonacci(int n){
    int a=1, b=0, c=0;
    for(c; c < n; c++){
        int m = a + b;
        a = b;
        b = m;
        cout << m << " ";
    }
}

int main(){
    int a = 10;
    fibonacci(a);
}