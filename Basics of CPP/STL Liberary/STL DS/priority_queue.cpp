//internally uses maxheap and minheap i.e internally is a bineary tree, in maxheap the largest element is on the top of the tree(head)
//visualized as a stack(pile of books), higest prority element is the one with the largest value. the higest value come on top no matter how you push
//when popping then largest then largest-1, then 3rd largest and so on.
//fn - push, emplace, top, pop, size, empty

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int>q;

    q.push(5);
    q.push(7);
    q.push(1);
    q.push(10);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;

    //when wanted in reveser order a compartor is used like (greater<int> q);
    priority_queue<int, vector<int>, greater<int>> q1;

    q1.push(5);
    q1.push(7);
    q1.push(1);
    q1.push(10);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }


    return 0;
}