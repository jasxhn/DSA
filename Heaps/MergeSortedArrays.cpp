#include <iostream>
#include <vector>
#include <queue> // for priority_queue
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    // Min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Push all elements from both arrays into the heap
    for (int num : arr1) minHeap.push(num);
    for (int num : arr2) minHeap.push(num);

    // Extract elements from heap to get merged sorted array
    vector<int> merged;
    while (!minHeap.empty()) {
        merged.push_back(minHeap.top());
        minHeap.pop();
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 4, 7};
    vector<int> arr2 = {2, 3, 6, 8};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
