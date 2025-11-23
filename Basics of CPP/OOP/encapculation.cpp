// The 4 Pillars of Object-Oriented Programming are:
// 1. Encapsulation – Bundling data and functions inside a class or a single unit.
// 2. Abstraction – Hiding complex details and showing only essential features.
// 3. Inheritance – Deriving new classes from existing ones to reuse code.
// 4. Polymorphism – One name, multiple forms (function/method behavior changes based on context).
//Getter: A method to access (get) the value of a private data member.
//Setter: A method to modify (set) the value of a private data member.

// Encapsulation binds data and methods into a single unit (class)
// It hides internal data from direct access using access specifiers (like private)

#include <iostream>
using namespace std;

class bank {
    private:
    int bankblance;

    public:
    void setbalance(int b) {
        bankblance = b;
    }

    int getbalance() {
        return bankblance;
    }
};

int main() {
    bank b;
    b.setbalance(5000);
    cout << "Balance in the Bank account is : " << b.getbalance() << endl;
    return 0;
}