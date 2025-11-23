// also applied on sorted arrays
// time complexity is O(log n)
//mid1 = l+(st-end)/3
//mid2 = r+(st-end)/3

#include <iostream>
using namespace std;

// Ternary Search Function
int ternarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        // Two mid points
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        // Check if key is at any mid
        if (arr[mid1] == key) return mid1;
        if (arr[mid2] == key) return mid2;

        // Narrow the search
        if (key < arr[mid1])
            right = mid1 - 1;
        else if (key > arr[mid2])
            left = mid2 + 1;
        else
            left = mid1 + 1, right = mid2 - 1;
    }
    return -1; // Not found
}

int main() {
    int arr[] = {7, 12, 19, 24, 31, 48, 51, 63, 67, 73, 81, 92};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int index = ternarySearch(arr, 0, size - 1, target);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
