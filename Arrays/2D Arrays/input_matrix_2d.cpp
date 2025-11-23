#include <iostream>
using namespace std;

int main() {
    int matrix[3][4];
    int rows = 3, columns = 4;

    // input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    // output
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
