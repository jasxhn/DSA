//go on each cell
//you can skip the row numbers but can define the column numbers in cpp in bool fx

#include <iostream>
using namespace std;

bool linearsearch(int mat[][3], int rows, int cols, int keys) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == keys) {
                return true;
            }
        }
    }
    return false;
}

int getmaxsum(int mat[][3], int rows, int cols) {
    int maxrowsum = INT_MIN;

    for(int i = 0; i < rows; i++) {
        int rowsum = 0;
        for(int j = 0; j  < cols; j++) {
            rowsum+= mat[i][j];
        }
        maxrowsum = max(maxrowsum, rowsum);
    }
    return maxrowsum;
}

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << linearsearch(matrix, rows, cols, 800) << endl;
    cout << getmaxsum(matrix, rows, cols) << endl;
    return 0;
}