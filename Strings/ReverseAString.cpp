#include <iostream>
#include <string>
#include <algorithm> // You need this for std::reverse
using namespace std;

int main() {
    string str = "Iron Man Tranfort";
    reverse(str.begin(), str.end()); 
    cout << str << endl;
    
    return 0;
}
