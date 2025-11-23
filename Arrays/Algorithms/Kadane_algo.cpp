/*
arr = [1, 2, 3, 4, 5]

maximum sub arrays = [1, 2, 3, 4, 5], [1, 2], [2, 3], [3, 4], [4, 5] and all
*/

#include <iostream>
#include <vector>
using namespace std;

int maxsubarray(vector<int>& nums) {
    int currsum = 0, maxsum = INT_MIN;

    for(int val : nums) {
        currsum += val;
        maxsum = max(currsum, maxsum);

        if(currsum < 0) {
            currsum = 0;
        }
    }
}

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            for(int i = st; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}