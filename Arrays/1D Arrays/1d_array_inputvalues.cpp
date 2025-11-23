#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size]; //Declare an array of size 5

    // Taking input
    cout << "Enter " << size << " marks:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    // Printing input
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}
