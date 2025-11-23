#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    
    int**ptr2 = &ptr; //ptr2 is a pointer holding the value of ptr. if ptr's address = ptr2 then its correct

    cout << &ptr << endl;
    cout << ptr2;
    return 0;
}

//address of a pointer is stored in pointer to pointer
/*
syntax:
int **ptr2 = &ptr1;
int* = pointer datatype for repreentation that its a ptr to ptr
*ptr2 = denote that ptr2 is a ptr and ptr2 is the name
&ptr is the address of ptr to be pointed by ptr2
*/