// Abstraction = Showing only essential features and hiding complex internal details
// Goal: Focus on "what it does" rather than "how it does it"
// Achieved using:
// 🔹 Classes (public interface, private guts)
// 🔹 Access specifiers (public, private, protected)
// 🔹 Abstract classes (with pure virtual functions)

#include <iostream>
using namespace std;

class ATM {
private:
    int pin;
    double balance;

    void verifyPIN() {
        cout << "Verifying PIN...\n";
    }

public:
    ATM(int userPIN, double initialBalance) {
        pin = userPIN;
        balance = initialBalance;
    }

    void withdraw(double amount) {
        verifyPIN();  // internal process
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient funds\n";
        }
    }

    void checkBalance() {
        verifyPIN();  // again hidden
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    ATM userATM(1234, 10000);
    userATM.checkBalance();   // Interface
    userATM.withdraw(2000);   // Interface
    // userATM.verifyPIN();   Can't access (hidden)
    return 0;
}
