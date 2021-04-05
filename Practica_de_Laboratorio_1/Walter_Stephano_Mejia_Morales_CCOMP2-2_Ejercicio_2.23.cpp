#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int M=0;
    int m=0;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> c;
    cout << "Ingrese el cuarto numero: " << endl;
    cin >> d;
    cout << "Ingrese el quinto numero: " << endl;
    cin >> e;

    if(a >= M || a <= M){
        M = a;
        if(b > M){
            if(b > c & b > d & b > e){
                M = b;
            }
        }
        if(c > M){
            if(c > b & c > d & c > e){
                M = c;
            }
        }
        if(d > M){
            if(d > b & d > c & d > e){
                M = d;
            }
        }
        if(e > M){
            if(e > b & e > c & e > d){
                M = e;
            }

        }
        cout << "Mayor: " << M << endl;
    }

    if(b >= m || b <= m){
        m = b;
        if(a<m){
            if(a < c & a < d & a < e){
                m = a;
            }
        }
        if(c<m){
            if(c < a & c < d & c < e){
                m = c;
            }
        }
        if(d<m){
            if(d < a & d < c & d < e){
                m = d;
            }
        }
        if(e<m){
            if(e < a & e < c & e < d){
                m = e;
            }
        }
        else{
            m = b;
        }
        cout << "Menor: " << m << endl;
    }

    return 0;
}