#include <iostream>
using namespace std;

class rectangle {
    public:
    int length, width;
    void setvalues(int l, int w); //function prototype
    void area(); //function prototype
};

//defination outside the class
void rectangle::setvalues(int l, int w) {
    length = l;
    width = w;
}

void rectangle::area() {
    cout << "Area : " << length * width << endl;
}

int main() {
    rectangle r1;
    r1.setvalues(4, 5);
    r1.area();
    return 0;
}

//Why use this?
//For better code organization in big projects — like keeping blueprints in one folder, and the actual tools in another 