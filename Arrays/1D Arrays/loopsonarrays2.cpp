//shortform fx of first program

#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;
 
int main() {
    int array[5] = {2, 3, 4, 55, -1};
    int size = 5;

    int minimum = INT_MAX;
    int maximum = INT_MIN;

    // Loop to find min and max using short form (min and max functions)
    for (int i = 0; i < size; i++) {
        minimum = min(array[i], minimum);  // min(current_value, current_min)
        maximum = max(array[i], maximum);  // max(current_value, current_max)
    }

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;

    return 0;
}
