// Destructor = Cleans up when object goes out of scope
// ~ClassName() { ... }

// Destructor → Automatically runs when object is destroyed.
// - Only one per class (no overloads), name starts with ~

#include <iostream>
using namespace std;

class Bye {
public:
    Bye() {
        cout << "Constructor called.\n";
    }

    ~Bye() {
        cout << "Destructor called. Goodbye!\n";
    }
};

int main() {
    Bye b1;  // constructor runs here
    // destructor auto-called when main() ends
    return 0;
}
