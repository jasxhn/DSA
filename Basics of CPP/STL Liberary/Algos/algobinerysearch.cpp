#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
 
    vector<int> vec = {1, 2, 4, 5, 6, 3};
    cout << binary_search(vec.begin(), vec.end(), 5) << endl; //binary search function
    return 0;
}