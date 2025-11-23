// In C++, functions defined inside the class are **implicitly inline** by default.
// So technically... most in-class functions ARE inline already!


//use because sometimes you’re defining a function outside the class, but still want it to behave like it's defined inside, i.e., inline it.
//// Overusing inline increases binary size (called code bloat)
// It's best used for:
//Small functions (1–3 lines)
//Frequently used functions
//Getters/setters

// Inline functions request the compiler to replace the function call with its body
// Small functions defined inside the class are auto-inline

#include <iostream>
using namespace std;

class fastmaths {
    public: 
    inline int square(int x) {
        return x * x;
    }

    inline void greet();
};

void fastmaths::greet() {
    cout << "this fx will behave as inline but from outside" << endl;
}

int main() {
    fastmaths f;
    cout << "Square : " << f.square(6) << endl;  
    f.greet();
    return 0;
}