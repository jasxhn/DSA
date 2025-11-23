// Polymorphism means "many forms" – it allows functions or methods to behave differently
// depending on how they are called or what object is calling them.

// There are 2 types:
// 1. Compile-time Polymorphism → Achieved through Function Overloading & Operator Overloading
// 2. Runtime Polymorphism → Achieved through Function Overriding (We'll use basic version here)

// Function Overloading = Same function name, different parameter list (type or count)
// Decided at compile-time

#include <iostream>
using namespace std;

class printer {
    public:
    
    void print(int n) {
        cout << "printing int : " << n << endl;
    }

    void print(double d) {
        cout << "printing double : " << d << endl;
    }

    void print(string st) {
        cout << "printing string st : " << st << endl;
    }
};

int main() {
    printer p;
    p.print(12);
    p.print(23.444);
    p.print("Jashan");
    return 0;
}