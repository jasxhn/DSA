// Constructor = A special method that runs automatically when an object is created.
// Destructor  = A special method that runs automatically when an object is destroyed.

// Both have the same name as the class.
// Constructor can be overloaded. Destructor cannot.
// Constructors can be: Default, Parameterized, Copy

 //Default Constructor: No parameters
 //Parameterized Constructor: Takes arguments
 //Copy Constructor: Creates a copy of another object

#include <iostream>
using namespace std;

class hello {
    public: 
    hello() {
        cout << "default constructor!\n";
    }
};

int main() {
    hello h1; //const automatically called
    hello h2;
    return 0;
}