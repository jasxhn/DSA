// public    → Accessible from outside the class
// private   → Accessible only within the class
// protected → Like private, but accessible in derived classes too

#include <iostream>
using namespace std;

class student {
    private:
    int rollno;

    public:
    void setter(int r) {
        rollno = r;
    }

    int getter() {
        return rollno;
    }
};

int main() {
    student s1;
    // s1.rollNo = 10; // ❌ Error: rollNo is private(only access through the getter)
    s1.setter(102);
    cout << "rollno for s1 : " << s1.getter() << endl;

    student s2;
    s2.setter(103);
    cout << "rollno for s2 : " << s2.getter() << endl;
    return 0;
}