#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {1, 2, 3, 4, 5};
    for(int i : vec) {
        cout << i << endl;
    }

    vector<char>ch = {'a', 'b', 'c', 'd', 'e'};
    for(char i : ch) {
        cout << i << endl;
    }
    return 0;
}