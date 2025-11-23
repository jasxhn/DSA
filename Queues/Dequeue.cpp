//doiuble ended queue

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(10);
    dq.push_back(100);
    dq.push_back(1000);
    dq.push_back(145);
    dq.push_back(471);
    dq.push_back(113);

    dq.push_front(700);
    cout << "Front : " << dq.front() << ", Back : " << dq.back() << endl;
    dq.pop_back();
    cout << "Back : " << dq.back() << endl;
    return 0;
}