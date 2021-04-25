#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    srand(static_cast<unsigned int>(time(0)));

    for(unsigned int counter{1}; counter <= 10; counter++){
        cout << setw(10) << (1 + rand()%6);

        if(counter % 5 == 0){
            cout << endl;
        }
    }    
}