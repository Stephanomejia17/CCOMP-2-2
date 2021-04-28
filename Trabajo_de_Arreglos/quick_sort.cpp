#include <iostream>
using namespace std;

void quicksort(int arr[], int izq, int der){
           //0      //9
    int i = izq, j = der, tmp;
    int p = arr[(izq + der)/2]; //4

    while(i <= j){
        while(arr[i] < p)i++;
        while(arr[j] > p)j--;
        if(i <=j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    if(izq < j)
        quicksort(arr, izq, j);
        if(i < der)
            quicksort(arr, i, der);
}
int main()
{
    int arreglo[5] = {89,4,5,2,0};

    quicksort(arreglo, 0, 5);

    for(int i = 0; i < 5; i++){
        cout << arreglo[i]<< " ";
    }

}