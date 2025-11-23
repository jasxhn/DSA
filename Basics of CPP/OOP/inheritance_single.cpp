// Inheritance = A class (child) can inherit properties and behaviors from another class (parent).
// This helps with code reusability and cleaner class structures.

// Think: "is-a" relationship. A Dog is an Animal.

// 1. Single Inheritance - One derived class inherits from one base class.
// 2. Multiple Inheritance - One derived class inherits from more than one base class.
// 3. Multilevel Inheritance - A class is derived from another derived class. Like a ladder.
// 4. Hierarchical Inheritance - Multiple classes inherit from a single base class.
// 5. Hybrid Inheritance - A combination of two or more types of inheritance.


#include <iostream>
using namespace std;

class animal {
    public:
    void eat() {
        cout << "Animal eats food!\n";
    }
};

class dog : public animal { //dog inherit from animals
    public :
    void bark() {
        cout << "Dog Barks!" << endl;
    }
};

int main() {
    dog d;
    d.eat(); //inherited from animals
    d.bark(); //from dog
    return 0;
}

/*
1. Single Inheritance
class A {
    // base class
};

class B : public A {
    // derived class from A
};

2. Multiple Inheritance
class A {
    // base class 1
};

class B {
    // base class 2
};

class C : public A, public B {
    // derived from both A and B
};

3. Multilevel Inheritance
class A {
    // base class
};

class B : public A {
    // derived from A
};

class C : public B {
    // derived from B (indirectly from A)
};

4. Hierarchical Inheritance
class A {
    // base class
};

class B : public A {
    // derived from A
};

class C : public A {
    // also derived from A
};

5. Hybrid Inheritance
class A {
    // base class
};

class B : public A {
    // derived from A
};

class C {
    // independent class
};

class D : public B, public C {
    // derived from both B (which is from A) and C
};

*/