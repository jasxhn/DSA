//vector of pair!

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <pair<int, int>> vec = {{1, 2}, {2, 3}, {4, 5}, {6, 9}};

    vec.push_back({2, 5});
    //emplace back makign AUTOPAIRS LIKE :-
    vec.emplace_back(33, 44);

    for(pair<int, int> i : vec) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    //another way using 'auto'

    for(auto i : vec) {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}