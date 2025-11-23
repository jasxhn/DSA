#include <iostream>
using namespace std;

class bank {
    private:
    int balance = 10000;

    friend class ATM;
};

class ATM {
    public:
    void showbalance(bank b) {
        cout << "Accessing the private balance : " << b.balance << endl;
    }
};

int main() {
    bank myacc;
    ATM atmmachine;
    atmmachine.showbalance(myacc);
    return 0;
}

// friend class ATM;
// Now ATM can access all private and protected data of Bank

// 🔸 Friend Function:
// - Declared with `friend` keyword inside class
// - Can access private & protected members
// - Defined outside the class

// 🔸 Friend Class:
// - Entire class gets access to private/protected members of another class
// - Useful for tightly coupled classes

// ❗ Friends break encapsulation – use only when necessary
