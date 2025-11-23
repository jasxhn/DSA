// Function Overriding = Redefining a base class method in derived class with the same signature
// At this stage, the function from base is "hidden", not dynamically resolved

#include <iostream>
using namespace std;

class animal {
    public : 
    void makesound() {
        cout << "soundddd" << endl;
    }   
};

class dog : public animal {
    public : 
    void makesound() {
        cout << "dog barks" << endl;
    }
};

int main() {
    dog d;
    d.makesound(); //calls dog's version
    animal a;
    a.makesound(); //calls animal's version
    animal b = d;
    b.makesound(); // Still calls Animal’s version because no virtual used
    return 0;
}