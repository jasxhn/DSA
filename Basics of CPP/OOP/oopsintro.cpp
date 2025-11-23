// OOP stands for Object-Oriented Programming.
// It's a programming paradigm based on the concept of "objects", 
// which contain data (fields) and methods (functions) that operate on the data.

// OOP helps in organizing code, reusing logic, and making it modular and scalable.
// It is different from procedural programming where the focus is on functions, not objects.

#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;

    void printinfo() {
        cout << "Name : " << name << "Age : " << age << endl;
    }
};

int main() {
    student s1;
    s1.name = "Jashan\n";
    s1.age = 19;
    s1.printinfo();
    return 0;
}