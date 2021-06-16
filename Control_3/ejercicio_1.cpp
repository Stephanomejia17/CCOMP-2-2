#include <iostream>
#include <vector>
using namespace std;
class Widget {
    static int numInstances;
    public:
        Widget(){numInstances++; }
        ~Widget(){numInstances--; }
        static int getNumInstances() {return numInstances; }
        virtual int f(){return 10;}
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
