// In Hierarchical Inheritance, multiple classes inherit from a single base class.
// Think: One parent → Many children

#include <iostream>
using namespace std;

class animal {
    public:
    void breathe() {
        cout << "All animals can breathe" << endl;
    }
};

class dog : public animal {
    public:
    void bark() {
        cout << "All dogs can bark" << endl;
    }
};

class cat : public animal {
    public:
    void meow() {
        cout << "All cats can Meow" << endl;
    }
};

int main() {
    cat c;
    c.breathe();
    c.meow();
    
    dog d;
    d.bark();
    d.breathe();
    return 0;
}