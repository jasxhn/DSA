#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "MAX HEAP PRIORITY QUEUE" << endl;
    priority_queue<int> p; //max heap

    p.push(10);
    p.push(384);
    p.push(23);
    p.push(344);
    p.push(22);

    //access the top element
    cout << p.top() << endl; //384 because its the biggest number

    //delete the top element
    p.pop();
    cout << p.top() << endl;

    cout << p.size() << endl;
    cout << p.empty() << endl;

    //print all elements
    while(!p.empty()) {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    cout << "MIN HEAP PRIORITY QUEUE" << endl;

    //MIN HEAP
    priority_queue<int, vector<int>, greater<int>> pe;

    pe.push(10);
    pe.push(384);
    pe.push(23);
    pe.push(344);
    pe.push(22);

     //access the top element
    cout << pe.top() << endl; //384 because its the biggest number

    //delete the top element
    pe.pop();
    cout << pe.top() << endl;

    cout << pe.size() << endl;
    cout << pe.empty() << endl;

    //print all elements
    while(!pe.empty()) {
        cout << pe.top() << " ";
        pe.pop();
    }

    return 0;
}