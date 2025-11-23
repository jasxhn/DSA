//oprations - push, pop, front

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class queue {
    Node* head;
    Node* tail;

    public:
    queue() {
        head = tail = NULL;
    }

    void push(int data) { // O(1)
    Node* newnode = new Node(data);
    if(empty()) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

    void pop() {
        if(empty()) {
            cout << "LL is empty/n";
            return;
        } else {
            Node*temp = head;
            head = head->next;
            delete temp;
        }
    }

    int front() {
        if(empty()) {
            cout << "LL is empty\n";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    queue qq;
    qq.push(12);
    qq.push(33);
    qq.push(232); //12 33 232

    while(!qq.empty()) {
        cout << qq.front() << " ";
        qq.pop();
    }
    cout << endl;
    return 0;
}