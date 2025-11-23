#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string, int> m;

    // Insert duplicate keys into multimap
    m.insert({"tv", 100});
    m.insert({"tv", 200});
    m.insert({"tv", 300});
    m.insert({"tv", 100});

    // Print remaining elements
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    m.erase(m.find("tv")); // for deleting one value
    m.erase("tv");

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
