//can be applied only on the sorted arrays or strings
//time complexity is O(log n)
// find the mid of a array = (start + end) / 2
// first half of an array is "start to mid - 1" and second half is "start to mid + 1". mid is independent 'middle' value
// start is st = mid + 1
// end is end = mid - 1
// USE MID = ST + (END-ST)/2 ON PLATFORMS TO GET NO STACKOVER FLOW PROBLEM

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binearysearch(vector<int> arr, int tar) { //iterative code
    int st = 0, end = arr.size()-1;

    while(st <= end) {
        int mid = (st + end) /2;

        if(tar > arr[mid]) {
            st = mid + 1;
        } else if(tar < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd
    int tar1 = 12;

    cout << binearysearch(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even
    int tar2 = 0;

    cout << binearysearch(arr2, tar2) << endl;
    return 0;
}