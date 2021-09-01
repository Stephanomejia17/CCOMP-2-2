#include <iostream>
#include <vector>
using namespace std;
class Widget {
    static int numInstances;
    public:
        Widget(){numInstances++; }
        ~Widget(){numInstances--; }
        static int getNumInstances() {return numInstances; }
        virtual int f() = 0;
};
int Widget::numInstances = 5;

class Gadget : public Widget {
    public:
        int f() {return 20; }
};
class Gizmo : public Widget {
    public:
        int f(){return 30; }
};
void do_it(Widget *w) {
    cout << w->f() << " ";
}
int main(){
    vector<Widget *> widgets;
    Widget wid;
    Gadget gad;
    Gizmo giz;
    if(true){
        Gizmo giz2;
        cout << wid.getNumInstances() << endl;
    }
    cout << wid.getNumInstances() << endl;
    widgets.push_back(&wid);
    widgets.push_back(&gad);
    widgets.push_back(&giz);
    for(Widget *widget : widgets)
        do_it(widget);
    cout << endl;

}

/*
a. El programa imprime 9, 8 y 10 20 30; 
el primer valor de 9 se imprime porque 
como en nuestro constructor pusimos que 
numInstances se sume uno cada vez que se 
llame, y al comienzo pusimos que numInstances = 5, 
entonces como en Widget wid, Gadget gad, Gizmo giz, 
Gizmo giz2 llaman a mi constructor, por eso se imprime 9, 
pero cuando salimos del if, se llama al destructor y 
se resta 1 a mi numInstances por eso se imprime 8; despues, 
se añaden a mi vector al final los objetos que hemos cread, 
los valores de 10, 20 y 30 se imprimen por mi for, ya que mi 
do_it lo que hace es llamar a f(), y este f() retorna el 
valor que le hemos puesto a cada clase.

 

b. Se imprimiría 9, 8 y 0 0 0, esto se debe a que las funciones virtuales puras son iguales a 0, esto hace que no se puedan instanciar

 

c. Si eliminamos virtual de todo nuestro código, imprimiría 9, 8 y 10 10 10, esto se debe a que la palabra virtual en C++ significa que polimorfismo, con esta palabra C++ sabe que en cada clase hay un función llamada f() pero que en cada una se ejecuta de distinta manera

d. No, realmente la palabra virtual solo debería de estar en la clase padre, si lo removemos de las demás clases no afectaría al resultado de impresión, ya que basta que solo se coloque en la clase padre para que C++ sepa que esa función se puede ejecutar de distintas maneras.
*/