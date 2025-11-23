// we assume that we have 2 parts in array. one is sorted and another is not. we push the smallest unsorted elements into the sorted part.
// uses the same (n-1) iterations
//time complexity is same O(n^2)

#include <iostream>
using namespace std;

void selectionsort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int smallestidx = i; // start with i as the smallest
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[smallestidx]) {
                smallestidx = j; // update if you find smaller
            }
        }
        swap(arr[i], arr[smallestidx]); // place smallest at the front of unsorted part
    }
}


void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionsort(arr, n);
    printarray(arr, n);
    return 0;
}