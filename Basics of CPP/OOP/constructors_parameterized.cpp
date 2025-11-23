#include <iostream>
using namespace std;

class person {
    public:
    string name;

    person(string n) {
        name = n;
    }

    void greet() {
        cout << "hi! im " << name << "!\n";
    }
};

int main() {
    person p1("alice");
    p1.greet();
    return 0;
}