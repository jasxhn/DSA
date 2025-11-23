//Whenever the data is sorted into the 'ascenting' or 'descending' order its called sorting.
//Uses n-1 loops even if it sorts elements before n-1 loops it runs till n-1 loops
//bubble sort's time complexity is O(n^2)
//this is in ascending order

#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    bool isSwap = false;


    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }

        if(!isSwap) { //means array is already swapped(optimisation using bool[no needed])
            return;
        }
    }
}

void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 3, 7};
    bubblesort(arr, n);
    printarray(arr, n);
    return 0;
}