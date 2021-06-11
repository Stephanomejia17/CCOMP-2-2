#include <iostream>

using namespace std;

class Persona{
    public:
        int edad;
};
class Padre : virtual public Persona{
};
class Madre : virtual public Persona{
};

class Hijo : public Padre, public Madre{
};

int main(){
    Persona p;
    Padre pa;
    Madre m;
    Hijo h;

    cout << "sizeof de Persona: " << sizeof(p) << " bytes"<< endl;
    cout << "sizeof de Padre: " << sizeof(pa) << " bytes"<< endl;
    cout << "sizeof de Madre: " << sizeof(m) << " bytes"<< endl;
    cout << "sizeof de Hijo: " << sizeof(h) << " bytes"<< endl;

    h.Madre::edad = 15;
    h.Padre::edad = 10;

    cout << h.edad << endl;

    return 0;
}