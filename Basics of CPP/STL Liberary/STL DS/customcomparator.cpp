#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second; // cleaner form!
}

int main() {
    vector<pair<int, int>> vec = {{3,1}, {2,3}, {3, 1}};

    sort(vec.begin(), vec.end(), comparator);

    for(auto val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}
