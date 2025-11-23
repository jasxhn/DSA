/*
pointer with pointer arth but type should be same
subract ptr
ptr - ptr = no of block of type(int) which can come between them
eg = ptr 1 = 108; ptr 2 = 100
108 - 100 = 8bytes i.e 2 integers
compare ptr(<, <=, >, >=, ==, !=) relational operators
ptr1 > ptr2
*/

#include <iostream>
using namespace std;

int main() {
    int* ptr2;//100
    int*ptr1 = ptr2+2;//108

    cout << ptr1 - ptr2 << endl; //2

    int* pte;
    int* pte2;

    cout << pte << endl;
    cout << pte2 << endl;

    cout << (pte < pte2) << endl;
    cout << (pte == pte2) << endl;
    return 0;
}