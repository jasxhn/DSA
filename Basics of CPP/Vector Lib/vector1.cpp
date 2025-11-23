#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector <int> vec = {1, 2, 3};
    cout << vec[0] << endl;
    vector<int>tex (3, 10);
    cout << tex[0] << endl;
    cout << tex[1] << endl;
    cout << tex[2] << endl;
    cout << tex[3] << endl;
    cout << tex[4] << endl;
    return 0;
}