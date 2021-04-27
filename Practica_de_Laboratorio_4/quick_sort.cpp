#include <iostream>
using namespace std;

void quicksort(int* arr, int izq, int der)
{
    int i = izq, j = der, tmp;
    int p = arr[(izq + der)/2];

    while(i <= j)
    {
        while(arr[i] < p)i++;
        while(arr[j] > p)j--;
        if(i <=j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j++;
        }
    }
    if(izq < j)
        quicksort(arr, izq, j);
        if(i < der)
            quicksort(arr, i, der);
}
int main()
{
    int arreglo[10] = {88,6,69,-33,98,7,23,5,0,100};

    quicksort(arreglo, 0, 9);

    for(int i = 0; i < 10; i++){
        cout << arreglo[i]<< " ";
    }
}