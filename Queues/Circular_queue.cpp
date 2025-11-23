// circlular queue uses array
// to send the array to the start we do the (r+1) % capacity; the remainder is always 1, 2 or 0

#include <iostream>
using namespace std;

class circular_queue {
    int* arr;
    int currsize, cap;
    int f, r; //front and rear value

    public:
    circular_queue(int size) {
        cap = size;
        arr= new int(cap);
        f=0;
        r=-1;
        currsize = 0;
    }

    void push(int data) {
        if(currsize == cap) {
            cout << "circular queue is full" << endl;
            return;
        } else {
            r = (r + 1) % cap;
            arr[r] = data;
            currsize++;
        }
    }

    void pop() {
        if(empty()) {
            cout << "CQ is empty" << endl;
            return;
        }
        f = (f + 1) % cap;
        currsize--;
    }

    int front() {
        return arr[f];
    }

    bool empty() {
        return currsize == 0;
    }

    void print() {
        for(int i = 0; i<cap; i++) {
            cout << arr[i]<< " ";
        }
        cout << endl;
    }
};

int main() {
    circular_queue cc(3);
    cc.push(1);
    cc.push(2);
    cc.push(3);
    cc.pop();
    cc.push(8);
    cc.print();
    return 0;
}