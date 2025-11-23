//look in notebook for logic - greater element

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 10, 8}; // Sample input
    int n = arr.size();

    stack<int> s;
    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--) {
        while(!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        ans[i] = (s.empty()) ? -1 : s.top();

        s.push(arr[i]);
    }

    // Print result
    for(int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
