#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int face_length=0;
    int surface_area = 6*(pow(face_length, 2));

    cout << "Face length" << "\tSurface area" << "\tVolume"<< endl << "of cube(cm)" << "\tof cube(cm^2)" << "\tof cube(cm^3)\n";
    cout << face_length << "\t\t" << 6*(pow(face_length, 2)) << "\t\t"  << pow(face_length, 3)<< endl;
    cout << face_length+1 << "\t\t" << 6*(pow(face_length+1, 2)) << "\t\t"  << pow(face_length+1, 3) << endl;
    cout << face_length+2 << "\t\t" << 6*(pow(face_length+2, 2)) << "\t\t"  << pow(face_length+2, 3) << endl;
    cout << face_length+3 << "\t\t" << 6*(pow(face_length+3, 2)) << "\t\t"  << pow(face_length+3, 3) << endl;
    cout << face_length+4 << "\t\t" << 6*(pow(face_length+4, 2)) << "\t\t"  << pow(face_length+4, 3) << endl;


    return 0;
}