/**
 *Implementar una funci+on que verifique si los elementos
 *de un arreglo de enteros representan un palindromo
 **/

#include <iostream>

using namespace std;

int Palindromo(int pal[]){
    int m = 3;
    int x = 0;
    for(int i = 0; i < 5; i++){
        if(pal[i] == pal[i+m]){
            x += 1;
        }
        m -= 1;
    }
    if(x == 2){
        cout << "Es palindromo" << endl;
    }
    else
        cout << "No es palindromo" << endl;
}
int main() {
       int pal[5]={1,2,3,4,1};
       int pal2[5]={1,2,3,4,5};
       int pal3[5]={1,5,8,5,1};  

       Palindromo(pal);
       Palindromo(pal2);
       Palindromo(pal3);
}