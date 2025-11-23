#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second; // cleaner form!
}

int main() {
    vector<int> vec = {3, 1 ,2 ,3 , 3, 1};

    reverse(vec.begin()+1, vec.end()+3); //to reverse the elements in a range but can be done for all elements without using the +1 and +3 range.

    for(auto val : vec) {
        cout << val << " " << endl;
    }

    cout << endl;

    return 0;
}
