//follows LIFO, last in first out structure like a pile of books!
//functions - push, emplace, top - check what is on top, pop, size, empty - check if stack is empty, swap - puts the elements of s in s2 and s2's in s. 
//when pushing = 1, 2, 3; when poping comes 3, 2, 1

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(5);

    cout << st.top() << endl; //5
    st.pop();
    cout << st.top() << endl; //2

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    stack <int> s4;
    s4.push(3);
    s4.push(3);
    s4.push(3);
    s4.push(3);
    s4.push(3);

    stack <int> s2;
    s2.swap(s4);
    
    cout << "s2 size : " << s2.size() << endl;
    cout << "s4 size : " << s4.size() << endl;


    return 0;
}