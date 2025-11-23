#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    vec.push_back(0);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}

//if size is 2 cap will be 2 if size is 3 cap will be 4
// size = 3 then cap = 6
//capacity = size * 2