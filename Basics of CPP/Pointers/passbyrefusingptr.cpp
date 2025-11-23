/*
Pass by reference means:
You pass the original variable to a function, not a copy. So changes made in the function affect the original value.

Now, in C++, there are two ways to do this:
1.Using Pointers
2.Using References (aka aliases)

1. Using pointers :- You pass the address of a variable to a function, so the function can directly change its value.
*/

#include <iostream>
using namespace std;

void changeavalue(int* x) {
    *x = 100;
}

int main() {
    int a = 10;
    changeavalue(&a);
    cout << "value = " << a; //100
    return 0;
}

/*What's happening:
&a sends the address of a.

*x accesses the value at that address.

So *x = 100 changes a.

Think of *x as saying: “Hey, follow this address and change what’s there.”
*/