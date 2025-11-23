//it is a complete binary tree that comes with a heap order property.
//complete binary tree = everylevel is completly filled except the last level. nodes always added from the "LEFT".
/*
HEAP types
1. Min Heap:
A min heap is a complete binary tree where the value of each node is less than or equal to its children. The smallest element is at the root.
        10
       /  \
     20    30
    /  \
  40    50

2. Max Heap:
A max heap is a complete binary tree where the value of each node is greater than or equal to its children. The largest element is at the root.
        50
       /  \
     30    40
    /  \
  10    20

// Heap formulas (0-based indexing):(insert from 1th index)
0-based indexing
Index 0 is used.
The root of the heap is at index 0.
So the first element you insert goes at arr[0], not arr[1].
// parent(i) = (i-1)/2
// left child(i) = 2*i + 1
// right child(i) = 2*i + 2
*/

#include <iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1) {
            int parent = index / 2;
            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void print() {
        for(int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteNode() {
        if(size == 0) {
            cout << "Heap is empty\n";
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(true) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if(left <= size && arr[left] > arr[largest]) largest = left;
            if(right <= size && arr[right] > arr[largest]) largest = right;

            if(largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                break;
            }
        }
    }

    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && arr[left] > arr[largest]) largest = left;
        if(right < n && arr[right] > arr[largest]) largest = right;

        if(largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n) {
        for(int i = n/2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        for(int i = n - 1; i > 0; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
};

int main() {
    heap h;

    // Insert elements
    h.insert(12);
    h.insert(34);
    h.insert(10);
    h.insert(100);
    h.insert(13);
    h.insert(21);

    cout << "Heap (after insertions): ";
    h.print();

    // Delete root
    h.deleteNode();
    cout << "Heap (after deleting root): ";
    h.print();

    // Run heap sort
    int tempArr[h.size];
    for(int i = 0; i < h.size; i++)
        tempArr[i] = h.arr[i+1];  // copy from 1-based heap

    h.heapSort(tempArr, h.size);

    cout << "Heap sorted array: ";
    for(int i = 0; i < h.size; i++)
        cout << tempArr[i] << " ";
    cout << endl;

    return 0;
}