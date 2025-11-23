//can be only applied on sorted data
#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search function
int binarySearch(vector<int>& arr, int start, int end, int key) {
    if (start > end) {
        return -1;  // Base case: not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        return mid;  // Found the element
    }
    else if (key < arr[mid]) {
        return binarySearch(arr, start, mid - 1, key);  // Search left half
    }
    else {
        return binarySearch(arr, mid + 1, end, key);  // Search right half
    }
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int key = 9;

    int index = binarySearch(arr, 0, arr.size() - 1, key);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
