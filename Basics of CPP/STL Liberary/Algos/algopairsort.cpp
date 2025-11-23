#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> v;

    // Inserting some pairs
    v.push_back({3, 100});
    v.push_back({1, 200});
    v.push_back({5, 50});
    v.push_back({2, 500});

    // Sorting based on p.first (default behavior)
    sort(v.begin(), v.end());

    // Printing the sorted vector of pairs
    for (auto p : v) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    cout << endl;
    return 0;
}
