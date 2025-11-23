#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl; //5
    cout << **q << endl; //5
    cout << p << endl; //0xff181ff694
    cout << *q << endl; //0xff181ff694
    return 0;
}