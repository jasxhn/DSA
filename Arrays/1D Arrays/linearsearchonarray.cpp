//time complexity is linear so its called linear search algorithm = O(n).

#include <iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target) {
    for(int i = 0; i < sz; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 33, 45, 64, 22};
    int target = 64;
    int sz = 5;

    cout << linearsearch(arr, sz, target) << endl;
    return 0;
}