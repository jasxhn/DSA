/*
kth smallest
Use a max heap of size k.
Push elements one by one. If heap size exceeds k, pop the largest.
After processing all elements, the top is the kth smallest.
*/

/*
kth largest
Use a min heap of size k.
Push elements, and if heap size exceeds k, pop the smallest.
After processing, the top is the kth largest.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find kth smallest element using Max Heap
int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> maxHeap; // max-heap

    for (int x : arr) {
        maxHeap.push(x);
        if (maxHeap.size() > k) {
            maxHeap.pop(); // keep only k elements
        }
    }

    return maxHeap.top();
}

// Function to find kth largest element using Min Heap
int kthLargest(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap

    for (int x : arr) {
        minHeap.push(x);
        if (minHeap.size() > k) {
            minHeap.pop(); // keep only k elements
        }
    }

    return minHeap.top();
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    cout << k << "rd smallest: " << kthSmallest(arr, k) << endl;
    cout << k << "rd largest: " << kthLargest(arr, k) << endl;

    return 0;
}