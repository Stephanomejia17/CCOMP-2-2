#include <iostream>
using namespace std;


template <typename T>
T sum(const T a, const T b){
    return a+b;
}

int main(){
    cout << sum<int>(3,4) << endl;
    cout << sum<float>(1.3,4.5) << endl;
}