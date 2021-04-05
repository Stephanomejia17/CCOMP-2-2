#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 8;
    string l1="V", l2 = "W", l3 = "X", l4 = "Y", l5 = "Z";

    if(x>0){
        cout << (l1 + l2 + "\t" + l2 + l1 + "\t" + l2 + l3 + "\t" + l3 + l2 + "\t" + l3 + l4 + "\t" + l4 + l3 + "\t" + l4 + l5 + "\t" + l5 + l4) << endl;
    }
    return 0;
}