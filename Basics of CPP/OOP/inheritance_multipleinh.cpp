#include <iostream>
using namespace std;

class printer {
    public : 
    void print() {
        cout << "Printing..." << endl;
    }
};

class scanner {
    public :
    void scan() {
        cout << "Scanning..." << endl;
    }
};

class copier : public printer, public scanner {
    public:
    void copy() {
        cout << "Copying..." << endl;
    }
};

int main() {
    copier c;
    c.print(); //from printer
    c.scan(); //from scanner
    c.copy(); //from copier
    return 0;
}

// class Copier : public Printer, public Scanner
// 🔹 Inherits from both Printer and Scanner
// 🔹 Use carefully: can cause ambiguity if same method exists in both
