// Member functions are functions defined inside a class.
// They operate on the data members of the class (aka the object's data).

// You can define them:
// - Inside the class (short & simple ones)
// - Outside the class using scope resolution (::)

// Some special types include:
// - Inline functions
// - Functions using the `this` pointer


#include <iostream>
using namespace std;

class circle {
    public : 
    double radious;

    void circlearea() {
        cout << "Area : " << 3.14 * radious * radious << endl;
    }
};

int main() {
    circle c1;
    c1.radious = 5;
    c1.circlearea();  
    return 0;
}