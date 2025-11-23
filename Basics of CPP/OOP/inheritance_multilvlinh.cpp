// In Multilevel Inheritance, a class is derived from a class which is already derived from another class.
// Think: Grandparent → Parent → Child

#include <iostream>
using namespace std;

class grandparent {
    public:
    void legacy() {
        cout << "Grandparent's legacy\n";
    }
};

class parent : public grandparent {
    public:
    void wisdom() {
        cout << "Parent's wisdom" << endl;
    }
};

class child : public parent {
    public:
    void energy() {
        cout << "Energy from the parent. Child's" << endl;
    }
};

int main() {
    child c;
    c.legacy();
    c.wisdom();
    c.energy();  
    return 0;
}

// Multilevel: Class C inherits from B, which inherits from A
// 🔹 Grandparent → Parent → Child
// 🔹 Useful to build tiered functionality
