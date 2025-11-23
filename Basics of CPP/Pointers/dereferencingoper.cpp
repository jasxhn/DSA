//dereferencing operator is (*)
//dereferencing means value at address
/*
if a=100
then *(&a) will give me 100 because the value at address is 100
*/

#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int* ptr = &a;

    cout << *(&a) << endl; //100
    cout << ptr << endl;

    return 0;
}