#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 4, 5, 6, 3};
    cout << *(max_element(vec.begin(), vec.end())) << endl; //gives max value in vector
    cout << *(min_element(vec.begin(), vec.end())) << endl; //gives min value in vector
}