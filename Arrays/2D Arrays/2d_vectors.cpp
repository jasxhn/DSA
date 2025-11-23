#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {1, 2, 3}, {1, 3, 4}};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
    }
    return 0;
}