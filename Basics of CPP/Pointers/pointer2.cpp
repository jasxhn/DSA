#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << "Address of a = " << &a << endl; //0x371c5ffa94
    cout << "value of ptr = " << ptr << endl; //0x371c5ffa94
    cout << "value of a  = " << a << endl; //10
    cout << "value of a using dereferencing = " << *ptr << endl; //10
    
    cout << "address of ptr for fun because it is also stored somewhere : " << &ptr << endl; //0x9a813ff6f0
    return 0;
}

//ptr and &a are same values / address.
//a and *ptr are same value.