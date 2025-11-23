//stores the same types of data
//contigous in memory
//linear ds
//if first block is int and is 100 then int has 4 bytes so it will take 4bytes memory in linear i.e 100 + 104 + 108 + 112....
//array index is used to assign the pos of element in the array it starts from 0;
//sizeof() - fx is used to know how much 'byte' of memory does a array occupy if / sizeof(int) then we get size.

#include <iostream>
using namespace std;

int main() {
    int marks[10] = {22, 33, 44, 56, 77}; // Remaining 5 elements will be 0
    double price[] = {3, 4, 5}; // This is fine

    // Changing the first element
    marks[0] = 101;

    // Printing specific elements
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    cout << endl;

    // Calculating number of elements in marks
    int size = sizeof(marks) / sizeof(marks[0]);
    cout << "Total elements in marks: " << size << endl;

    cout << endl;

    // Loop to print all elements
    for (int i = 0; i < size; i++) {
        cout << "marks[" << i << "] = " << marks[i] << endl;
    }

    return 0;
}
