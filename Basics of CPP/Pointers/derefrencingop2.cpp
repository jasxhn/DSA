#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    int** parptr = &ptr;

    cout << *(parptr) << endl; //0xd66f7ffac4
    cout << (ptr) << endl; //0xd66f7ffac4
    cout << **(parptr) << endl; //10
    return 0;
}

//going backwards to derefrencing