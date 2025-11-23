// Static members belong to the class itself, not to any individual object.
// - Static Data Member: Shared across all objects
// - Static Member Function: Can access only static members

#include <iostream>
using namespace std;

class student {
    public:
    string name;
    static int count; //static variable declaration

    student(string n) {
        name = n;
        count++; // increment shared count every time object is created
    }

    void display() {
        cout << "Name : " << name << " | Total Students : " << count << endl; 
    }
};

//static variable is defined outside
int student::count = 0;

int main() {
    student s1("ALice");
    student s2("bob");
    student s3("charlie");
    
    s1.display();
    s2.display();
    s3.display();

    return 0;
}