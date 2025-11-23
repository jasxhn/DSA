#include <iostream>
using namespace std;

int main() {
    pair<string, int> pa = {"Saini", 5};
    cout << pa.first << " " << pa.second << endl;

    pair<int, pair<char, int>> p = {1, {'s', 4}};
    cout << p.first << endl; //1
    cout << p.second.first << endl; // s
    cout << p.second.second << endl; // 4
    return 0;
}