#include <iostream>
using namespace std;

int main() {

    int a = 4;
    int* ptr = &a;

    cout << "the value of a is : " << ptr << endl;
    cout << "the value of a is : " << *(ptr) << endl;

    //new operator = dynamic memory allocation
    int *p = new int(40);
    cout << "the value at address p : " << *(p) << endl;

    int *arr = new int[3]; //manually allocated 3 element space in array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr; //deleted block of memory of arr i.e memory freed

    cout << "The value of arr[0] is : " << arr[0] << endl;
    cout << "The value of arr[0] is : " << arr[1] << endl;
    cout << "The value of arr[0] is : " << arr[2] << endl;

    return 0;
}