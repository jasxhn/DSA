//add or subtract
//ptr + 1 = plus 1 by 1 integer(4byte space added)
//ptr + 3 = plus by 3 integer(12 byte space added)
// hexa counting = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f
//array memory address are contigious depending on datatype eg int
/*
index value address
0 1 100
1 2 104
2 3 108
3 4 112
4 5 116
*/
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;

    ptr = ptr + 2;

    cout << ptr << endl;

    int arr[] = {1, 2, 4, 5, 6};
    cout << *arr << endl;
    cout << *(arr+1) << endl;//gives value because derefrenced
    cout << *(arr+4) << endl;
    cout << arr+1 << endl;//gives address
    cout << &arr+2 << endl; //same as arr in meaning
    return 0;
}