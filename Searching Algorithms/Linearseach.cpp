// Can be applied on unsorted arrays
// Used to return the index on which the element (target) is found
//time complexity is O(n)

#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    int index = linear_search(arr, size, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << ".\n";
    } else {
        cout << "Element " << key << " not found in the array.\n";
    }

    return 0;
}
