// Inheritance allows one class to acquire properties of another class.

#include <iostream>
using namespace std;

class animal {
    public:
    void eat() {
        cout << "dog is eating." << endl;
    }
};

class dog : public animal {
    public : 
    void bark() {
        cout << "dog barks.\n";
    }
};

int main() {
    dog d;
    d.eat();
    d.bark();  
    return 0;
}