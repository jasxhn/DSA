//used to check the 1st and last occurence of an element x in the code using bineary seach

#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int>& arr, int key) {
    int start = 0, end = arr.size() - 1, result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            result = mid;
            end = mid - 1; // Search left part for earlier occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(const vector<int>& arr, int key) {
    int start = 0, end = arr.size() - 1, result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            result = mid;
            start = mid + 1; // Search right part for later occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 6};
    int key = 4;

    int first = firstOccurrence(arr, key);
    int last = lastOccurrence(arr, key);

    cout << "First occurrence of " << key << ": " << first << endl;
    cout << "Last occurrence of " << key << ": " << last << endl;

    return 0;
}
