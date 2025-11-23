/*size, push_back, pop_back, front = print 1st value, back = print last value, at, capacity*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <char> ch = {'a', 'b', 'c', 'd', 'e'};
    cout << "size of ch : " << ch.size() << endl;
    ch.push_back('s');
    cout << "After pushback size = " << ch.size() << endl;
    for(char i : ch) {
        cout << i << endl;
    }
    ch.pop_back();
    cout << "after pop : " << ch.size() << endl;
    cout << ch.front() << endl;
    cout << ch.back() << endl;
    cout << ch.at(1);
    return 0;
}