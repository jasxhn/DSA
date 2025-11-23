//Stack using STL Liberary

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> s;

    s.push(10);
    s.push(20);
    s.push(120);
    s.push(1800);

    while(!s.empty()) {
        cout << s.top() << " " << endl;
        s.pop();
    }
    
    return 0;
}