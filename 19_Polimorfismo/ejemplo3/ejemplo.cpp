#include <iostream>
using namespace std;

/**
 *Crear un programa en C++ que tenga la siguiente jerarquía
 *de clases y hacer polimorfismo con el método comer()
 * 		Animal
 * 	Humano		Perro
 * */
class Animal{
	private:
		string Nombre;
	public:
		Animal(string);
		virtual void Comer();
};
class Humano : public Animal {
	private:
		int edad;
	public:
		Humano(string, int);
		void Comer();
};
class Perro : public Animal {
	private:
		string Raza;
	public:
		Perro(string, string);
		void Comer();
};

Animal::Animal(string _nombre){
	Nombre = _nombre;
}
void Animal::Comer(){
	cout << Nombre << " esta comiendo" << endl;
}
Humano::Humano(string _nombre, int _edad) : Animal(_nombre){
	edad = _edad;
}
void Humano::Comer(){
	Animal::Comer();
	cout << " Y tiene " << edad << " anios";
}
Perro::Perro(string _nombre, string _raza) : Animal(_nombre){
	Raza = _raza;
}
void Perro::Comer(){
	Animal::Comer();
	cout << " Y es de raza " << Raza << endl;
}
int main(){
	Animal *animales[3];
	animales[0] = new Animal("Gato");
	animales[1] = new Humano("Stephano", 18);
	animales[2] = new Perro("Bruce", "Yorky");
	
	animales[0]->Comer();
	animales[1]->Comer();
	cout << endl;
	animales[2]->Comer();


	return 0;
}


	
