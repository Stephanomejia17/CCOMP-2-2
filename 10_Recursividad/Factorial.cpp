#include <iostream>

using namespace std;
int factorial(int n){
    if(n ==0){
        n = 1;
    }
    else{
        n = n * factorial(n-1);
    }
    return n;
}

int main(){
    int x = 3;

    cout << factorial(3);
}