#include <iostream>
#include <string>

using namespace std;

class motorVehicle{
    private:
        string make;
        string fueltype;
        int yearOfanufacture;
        string color;
        int engineCapacity;
    public:
        motorVehicle(); //Constructor
        void setmotorVehicle(string, string, int, string, int);
        void display();
        int getmotorVehicle1();
        int getmotorVehicle2();
        string getmotorVehicle3();
        string getmotorVehicle4();
        string getmotorVehicle5();

};

//constructor
motorVehicle::motorVehicle(){
}

//establecemos valores a los atributos
void motorVehicle::setmotorVehicle(string _make, string _fueltype, int _yearofmanufacture, string _color, int _engineCapacity){
    make = _make;
    fueltype = _fueltype;
    yearOfanufacture = _yearofmanufacture;
    color = _color;
    engineCapacity = _engineCapacity;
}

int motorVehicle::getmotorVehicle1(){
    return yearOfanufacture;
}
int motorVehicle::getmotorVehicle2(){
    return engineCapacity;
}
string motorVehicle::getmotorVehicle3(){
    return make;
}
string motorVehicle::getmotorVehicle4(){
    return fueltype;
}
string motorVehicle::getmotorVehicle5(){
    return color;
}
void motorVehicle::display(){
    cout << "Marca: " << make << endl;
    cout << "Tipo de combustible: " << fueltype << endl;
    cout << "Color: " << color << endl;
    cout << "Anio de fabricacion: " << yearOfanufacture << endl;
    cout << "Capacidad de motor: " << engineCapacity << endl;
}

int main(){
    motorVehicle m1;
    m1.setmotorVehicle("Jeep", "Gasolina",2020, "Azul electrico", 4);
    m1.display();

    return 0;
}