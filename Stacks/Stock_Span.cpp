//tc = O(n)
//look in notebook for logic - stock span

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // stock price
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};

    // solution
    vector<int> ans(price.size());  // initialize with same size
    stack<int> s;

    for(int i = 0; i < price.size(); i++) {
        while(!s.empty() && price[s.top()] <= price[i]) {
            s.pop();
        }

        if(s.empty()) {
            ans[i] = i + 1;
        } else {
            ans[i] = i - s.top(); // i - previous higher index
        }
        s.push(i);
    }

    // print answer
    for(int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
