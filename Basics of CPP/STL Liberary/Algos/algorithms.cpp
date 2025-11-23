//sort(arr, arr+n) //asending order, arrays in ascending
//sort(arr, arr+n, greater<int>())//both in decending
//sort(v.begin(), v,end()) //for vectors in ascending

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {3, 4, 7, 1, 5};
    sort(arr, arr + 5); // Sorts in ascending order

    for(int val : arr) {
        cout << val << " "; // ← Here's the fix!
    }

    cout << endl;

    vector<int>vec = {3, 4, 5, 1, 9 ,99};

    sort(vec.begin(), vec.end());

    for(int val : vec) {
        cout << val << " "; // ← Here's the fix!
    }

    cout << endl;

    //decending order : sort(arr, arr+n, greater<int>())
    sort(vec.begin(), vec.end(), greater<int>());

    for(int val : vec) {
        cout << val << " "; // ← Here's the fix!
    }

    cout << endl;
    
    return 0;
}