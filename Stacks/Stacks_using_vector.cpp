//bucket like structure
//follows LIFO - last in first out
//all oprations get from top
//pushed and popped from top
// 3 functions are push(), pop(), top(); all have O(1) = constant time complexity.
//implement using vector to have NO SIZE LIMITATION and implement using ARRAY for static/size limited stack
//make a vector to behave like stack
//has a pointer called top to see top value
//last index of a vector is vector(v.size)-1

#include <iostream>
#include <vector>
using namespace std;

class stack {
    vector<int>v;

public:

    void push(int val) { //O(1)
        v.push_back(val);
    }

    void pop() { //O(1)
        v.pop_back();
    }

    int top() { //O(1)
        if (!v.empty()) return v.back();
        return -1; // Or throw an exception
    }

    bool isempty() {
        return v.size() == 0;
    }

    void print() { //function to print
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isempty()) {
    cout << s.top() << " ";
    s.pop();
}
    cout << endl;
    return 0;
}