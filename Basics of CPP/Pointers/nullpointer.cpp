//does not point to any location
//used in linked list and trees
//null pointer cannot be derefrenced or it shows error
// null = NULL

#include <iostream>
using namespace std;

int main() {
    int* ptr;
    cout << ptr << endl; //0 or garbage value

    //if we want to show that we stored nothing in *ptr then we use NULL
    int *ptr2 = NULL;
    cout << ptr2 << endl; //0
    return 0;
}