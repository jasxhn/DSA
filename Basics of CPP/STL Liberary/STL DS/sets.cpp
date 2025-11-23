//sorts values in a particular sorted order and only stores only UNIQUE values. IMAGINE LIKE A SET IN MATHS. Insert data using emplace or insert
//internally uses a self balancing tree
//functions = insert, pmplace, count, erase, find, sezie, empty, erase, lower_bound(4) = if 4 exits in set then the function will return the 4 or just bigger value then 4 in the set, upper_bound(4) = only bigger value then 4.
// 2 other types are multiset = stores duplicate values and unordered set = stores value in no order.
//upper bound and lower bound can only be calculated for ordered sets i.e multiset and set not for unordered set.

#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(6);
    s.insert(5);//sorted order; stores only unique values

    for(auto i : s) {
        cout << i << " ";
    }

    cout << endl;

    s.insert(3);
    s.insert(3);
    s.insert(3); //not store duplicates

    cout << s.size() << endl;

    cout << "lower bound for 4 : " << *(s.lower_bound(4.4)) << endl; //5
    cout << "lower bound for 4 : " << *(s.upper_bound(5)) << endl; //6

    return 0;
}