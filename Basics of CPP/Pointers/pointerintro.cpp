//ptrs are in the form of the hexa decimals = dec = 10(0-9); bin = 2(0,1); hexa = 16(0-9 and a b c d e f)
//every variable is stored at a memeory address it looks like 'Ox36a6'
//to PRINT THESE MEMORY ADDRESSES WE USE A AMPERCENT(&) OPERATOR CALLED ADDRESS OF OPERATOR

#include <iostream>
using namespace std;

int main() {
    int a  = 1;
    cout << "address of a = " << &a << endl; //prints addreess of a
    return 0;
}

//pointers = special variables that store address of the other variables
/*
to make the pointer the datatypes should be same as the datatype of the varibale it is being created
eg
int a = 10;
int *ptr = &a;
int = datatype
* means ptr created
ptr is the name of the pointer
a is not written as 'a' because i need the address not value so we use
&a = address of a stored in ptr named pointer which is a variable
EXAMPLE IN POINTER2.cpp
*/