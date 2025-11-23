// A class is a user-defined data type that acts as a blueprint for objects.
// An object is an instance of a class, having its own copy of the class's members.

// Think of a class as a "car design" and an object as the actual "car" built from it.

#include <iostream>
using namespace std;

class car {
    public:
    string brand;
    int age;

    void drive() {
        cout << brand << " is drived." << endl;
    }
};

int main() {
    car c1;
    c1.brand="merc";
    c1.age=2022;
    c1.drive();
    return 0;
}