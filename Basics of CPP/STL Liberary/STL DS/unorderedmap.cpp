#include <iostream>
#include <map>
#include <unordered_map>
//sort data in unoredered order, no duplicates allowed
using namespace std;

int main() {

    unordered_map<string, int> m;

    m.emplace("tv", 1000);
    m.emplace("nigs", 102);
    m.emplace("digs", 111);
    m.emplace("digs", 111);
    m.emplace("digs", 111);
    m.emplace("digs", 111);
    

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}