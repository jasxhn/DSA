// Copy Constructor = creates a new object as a copy of an existing object

#include <iostream>
using namespace std;

class book {
    public:
    string title;

    book(string t) {
        title = t;
    }

    book(const book &b) {
        title = b.title;
    }

    void print() {
        cout << "book title : " << title << endl;
    }
};

int main() {
    book b1("cpp mastery");
    book b2 = b1; //copy const gets called
    b2.print();
    return 0;
}