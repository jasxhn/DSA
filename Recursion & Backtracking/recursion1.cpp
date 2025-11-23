// //when a function calls itself
// looks like this
// void abc() {

//     abc(); //we call abc from inside the abc
// }
//all the work that can be done by the loops can be done by recusion also and vice versa
//in a big problem solve the one part in a function of recusion and call it back for rest all.
//The "base case" in recursion is the condition that stops the recursion.
//It's the simplest version of the problem that can be solved directly without making a recursive call.

//print numbers from n to 1
#include <iostream>
using namespace std;

void printnums(int n) {
    if(n == 1) {
        cout << "1\n";
        return;
    }

    cout << n << " "; //n printed
    printnums(n-1); //n-1, n-2 etc
}


 
int main() {
    printnums(40);
    return 0;
}