//upper bound and lower bound can only be calculated for ordered sets i.e multiset and set not for unordered set.

#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(6);
    s.insert(5);//sorted order; stores only unique values

    cout << endl;

    s.insert(3);
    s.insert(3);
    s.insert(3); //not store duplicates

    for(auto i : s) {
        cout << i << " ";
    }

    cout << s.size() << endl;

    return 0;
}