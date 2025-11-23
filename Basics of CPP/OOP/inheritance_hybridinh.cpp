// Hybrid Inheritance = Combination of 2 or more types of inheritance.
// Can lead to ambiguity (Diamond Problem)

#include <iostream>
using namespace std;

class A {
public:
    void greet() {
        cout << "Hello from A\n";
    }
};

class B : public A {};

class C : public A {};

class D : public B, public C {
    // D has two copies of A::greet() – one from B, one from C
public:
    void callGreet() {
        // greet();       // ❌ Ambiguous!
        B::greet();       // ✅ Disambiguated
        C::greet();       // ✅
    }
};

int main() {
    D obj;
    obj.callGreet();
    return 0;
}
