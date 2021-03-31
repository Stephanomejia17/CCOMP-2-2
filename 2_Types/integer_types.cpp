#include <iostream>

using namespace std;

int main(){

    /*
    * Para tipos enteros se tienen los siguientes: short, int, long, long long 
    */

    //La función sizeof me retorna el tamaño en bytes en memoria de la variable:

   short x = 10;
   int y = 10;
   long z = 10;
   long long w = 10;

    //Short retorna un espacio de 2 bytes
   cout << sizeof(x) << endl;

   //int retorna un espacio de 4 bytes
   cout << sizeof(y) << endl;

   //long retorna un espacio de 4 bytes
   cout << sizeof(z) << endl;

   //long long retorna un espacio de 8 bytes
   cout << sizeof(w) << endl;

   return 0;
   
}