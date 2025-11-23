// Doubly linked list
//fucntions - pushfront, pushback, pop front, pop back, print

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class Doublylist {
    Node* head;
    Node* tail;

public:
    Doublylist() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void push_back(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode; 
        } else {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            cout << "List is empty! Nothing to pop." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            // List became empty, so update tail too
            tail = NULL;
        }
        delete temp;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void pop_back() {
    if (tail == NULL) {
        cout << "List is empty! Nothing to pop." << endl;
        return;
    }

    Node* temp = tail;
    tail = tail->prev;

    if (tail != NULL) {
        tail->next = NULL;
    } else {
        // List is now empty, so update head too
        head = NULL;
    }

    delete temp;
}
};

int main() {
    Doublylist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);

    dll.push_back(10);
    dll.push_back(20);

    dll.pop_front(); //4 gone
    dll.pop_back(); // 20 gone

    dll.print();  // Should print: 4 <=> 3 <=> 2 <=> 1 <=> 10 <=> 20 <=> NULL

    return 0;
}