//static void showVal();
//Belongs to the class, not to any object
//Can be called with: ClassName::function()
//Can only access static data members (no 'this' allowed)

#include <iostream>
using namespace std;

class test {
    public:
    static int val;

    static void showval() {
        //static functions can access only static members
        cout << "static val = " << val << endl;
    }
};

int test::val = 42;

int main() {
    test::showval(); //without creating object
    test t1; //creating object
    t1.showval();
    return 0;
}

// 🔸 Static Data Member:
// - Shared across all objects of a class
// - Only one copy exists
// - Must be defined outside the class

// 🔸 Static Member Function:
// - Can be called without object
// - Only accesses static data members
// - Doesn't use 'this' pointer
