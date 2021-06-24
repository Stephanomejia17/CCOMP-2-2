#include <iostream>
using namespace std;

//{(x, y)|4 divide a x − y}
int main(){
    int x[] = {1,2,3}, y[] = {1,2,3};
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            cout << "(" << x[i] << ", " << y[j] << ")" << endl;
        }
           
    }
    return 0;
}