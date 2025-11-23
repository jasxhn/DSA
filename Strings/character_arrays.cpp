//arays of characters
// /0 (null character) takes 1 byte of space and \n also 1 byte.
//ussed to make a valid string
#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[] = {'a', 'b', 'c', 'd', '\0'};
    cout << str << endl;
    return 0;
}
