// A 'friend' function or class can access private/protected members of another class.
// It breaks encapsulation slightly — like giving a spare key to a trusted friend.

//When to Use Friends?
// When two classes/functions must collaborate deeply
// When encapsulation is less important than efficiency/access
// Use with caution: Too many friends = less secure, harder to maintain

#include <iostream>
using namespace std;

class secret {
    private:
    int pin = 1234;

    friend void revealpin(secret s);
};

void revealpin(secret s) {
    //can access private member because its a friend
    cout << "Secret PIN is : " << s.pin << endl;
}

int main() {
    secret obj;
    revealpin(obj);
    return 0;
}