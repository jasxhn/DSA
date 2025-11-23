#include <iostream>
#include <string>
#include <algorithm> // Include this for next_permutation

using namespace std;

int main() {
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    prev_permutation(s.begin(), s.end());
    cout << s << endl;
    cout << max(4, 5) << " " << min(4, 10) << endl;
    int a = 5;
    int b = 60;
    swap(a, b);
    cout << "a : " << a << endl; //swapped
    
    return 0;
}