//used to store (key, value) pair. like a table. key = unique values and value = s can be same.
//functions = insert, emplace, count, erase, find, size, empty, erase.

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["tv"] = 50; //tv is key and 50 is value
    m["laptop"] = 100;
    m["mouse"] = 100;
    m["keyboard"] = 80; //sequence will be in [asendeding] order of first work like a then b and then c etc

    //insert
    m.insert({"camera", 55});
    //emplace
    m.emplace("headphones", 90);

    //erase
    m.erase("tv");

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    //count = how many key exist in ma whose value is laptop
    cout << "count : " << m.count("laptop") << " " << m["laptop"] << endl; // 1 100

    //find
    if(m.find("camera") != m.end()) {
        cout << "camera found\n";
    } else {
        cout << "not found";
    }
    
    return 0;
}