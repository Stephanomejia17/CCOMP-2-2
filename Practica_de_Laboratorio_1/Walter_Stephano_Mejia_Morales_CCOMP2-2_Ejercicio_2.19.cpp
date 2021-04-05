#include <iostream>

using namespace std;
int main() {
    int a; //13
    int b; //27
    int c; //14
    int M=0;
    int m=0;
    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Ingrese el segundo numero: ";
    cin >> c;
    cout << "Suma: " << a + b + c << endl;
    cout << "Promedio: " << (a + b + c)/3 << endl;
    cout << "Producto: " << a*b*c << endl;
    if(a>=m){
        m = a;
        if(m>b){
            if(c>b){
                m =b;
            }
            else{
                m = c;
            }
        }
        else{
            m=a;
        }
        cout << "Menor: " << m << endl;
    }
    if(a>=M){
        M = a;
        if(b>M){
            if(b>c){
                M=b;
            }
            else{
                M=c;
            }
        }
        cout << "Mayor: " << M << endl;
    }

    return 0;
}
