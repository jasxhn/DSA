//arr in array is a pointer that points to the 0th index of an array
//its a constant pointer i.e value thoughout the array program is same

#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};

    cout << arr << endl; //0xb36fffd10
    cout << *arr << endl; //0th index i.e 1
    return 0;
}