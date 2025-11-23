// Pass by Reference using Aliases (References) :- You pass the variable itself but make an alias (nickname) for it in the function.

#include <iostream>
using namespace std;

void changeavalue(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    changeavalue(a);
    cout << "value : " << a;
    return 0;
}

/*
What's happening:
int& x means “x is just another name for whatever is passed.”

So x = 100 changes the original a.
Think of references as: “You’re giving the function your real name, not your twin brother with a fake mustache.”
*/