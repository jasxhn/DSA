//Stack using linked list

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class stack {
    list <int> ll;

    public:
    void push(int value) { //O(1)
        ll.push_front(value);
    }

    int top() { //O(n)
        return ll.front();
    }

    void pop() {
        ll.pop_front();
    }

    bool empty() {
        return ll.size() == 0;
    }
};

int main() {
    stack lc;

    lc.push(100);
    lc.push(200);
    lc.push(300);
    lc.push(400);

    lc.pop();

    while(!lc.empty()) {
        cout << lc.top() << endl;
        lc.pop();
    }
    return 0;
}