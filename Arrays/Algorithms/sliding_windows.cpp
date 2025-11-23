//problem - Array of n elements and calculate the minimum sun of k, consecutive elements.
//example k = 3

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> maxslidingwindow(vector<int> &nums, int k) {
    deque<int> dq;
    vector<int> result;

    for(int i = 0; i < nums.size(); i++) {
        while (!dq.empty() && nums[i] > nums[dq.back()]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Add to result once the first window is complete
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> res = maxslidingwindow(arr, k);
        for (int x : res) {
            cout << x << " ";
        }
}