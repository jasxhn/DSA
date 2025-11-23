#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl; //0xdbc39ffa24
    ptr++; //+4 bytes because int type
    cout << ptr << endl; //0xdbc39ffa28
    
    cout << endl;

    cout << ptr << endl; //0xdbc39ffa24
    ptr++; //-4 bytes because int type
    cout << ptr << endl; //0xdbc39ffa20
    return 0;
}

//these are increment(++)/decrement(--)
//p++ and ++p/p-- and --p
//if the pointer is integer type then it will get 4 plused in the address because it takes 4 bytes. if it was double ptr type then it wpuld be 8.
//same for minus