#include <iostream>
using namespace std;

class dog {
    public:
    string name;

    void barking() {
        cout << "woof woof" << endl;
    }

};

int main() {
    dog d1;
    d1.name = "Pitbull";
    d1.barking();
    return 0;
}

// This is better than writing a separate function for each dog.
// You can create multiple objects with their own data and behavior.
