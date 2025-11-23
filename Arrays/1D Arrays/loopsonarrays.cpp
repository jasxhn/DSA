//find the smallest value.
//for comparision start with +infinity denotes by INT_MAX;

#include <iostream>
using namespace std;

int main() {
    int array[5] = {2, 3, 4, 55, -1};
    int size = 5;
    int infinity = INT_MAX;
    int amswer;

    for(int i = 0; i < size; i++) {
        if(array[i] < infinity) {
            amswer = array[i];
    }
}

    cout << amswer << endl;
    return 0;
}