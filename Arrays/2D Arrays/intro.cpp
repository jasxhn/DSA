//known as matrix in programming. 
//used to store rows and columns in data in coding
//horizontal = rows, vertical = columns
//int matrix = [4][5] = rows and columns
//rows and columns starts from 0 instead of 1.
// for printing we go to outter loop of rows then inner of columns
//first rows then cols

#include <iostream>
using namespace std;

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8,  9}, {10, 11, 12}};

    int row = 4;
    int cols = 3;

    cout << matrix[2][1] << endl;
    cout << matrix[1][1] << endl;
    matrix[2][1] = 19;
    cout << matrix[2][1] << endl;

    for(int i = 0; i < row; i++) { //displaying all the elements of the matrix
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    return 0;
}