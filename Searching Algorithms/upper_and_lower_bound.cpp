// Lower Bound = “First guy who’s greater than or equal to X.”
// Upper Bound = “First guy who’s strictly greater than X.”

#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int key) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= key) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(int arr[], int n, int key) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > key) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int lb = lowerBound(arr, n, key);
    int ub = upperBound(arr, n, key);

    cout << "Lower bound of " << key << " is at index " << lb << " (value = " << arr[lb] << ")" << endl;
    cout << "Upper bound of " << key << " is at index " << ub << " (value = " << arr[ub] << ")" << endl;

    return 0;
}
