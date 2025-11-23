// 🔹 Encapsulation = Bundling data and functions together inside a class
// 🔹 Data Hiding = Restricting direct access using private/protected keywords
// 🔹 Access only via public methods (getters/setters)
// 🔹 Helps prevent unwanted modifications & keeps internal state safe

#include <iostream>
using namespace std;

class bankbalance {
    private : 
    int balance; //hidden from outside world

    public:
    void setbalance(int amount) {
        if(amount >= 0) {
            balance = amount;
        }
    }

    int getbalance() {
        return balance;
    }
};

int main() {
    bankbalance b1;
    b1.setbalance(5000); // using public method
    cout << b1.getbalance(); // outputs : 5000
    // acc.balance = 10000; ❌ Not allowed (private)
    return 0;
}