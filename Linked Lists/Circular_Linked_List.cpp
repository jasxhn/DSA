//Circular Linked List

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

class Circularlist {
    Node* head;
    Node* tail;

public:
    Circularlist() {
        head = tail = NULL;
    }

    void pushfront(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
            tail->next = head;      
        } else {
            newnode->next = head;
            head = newnode;
            tail->next = head;      
        }
    }

    void pushback(int val) {
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            tail->next = head;
        } else {
            newnode->next = head;
            tail->next = newnode;
            tail = newnode; //newnode = tail is also correct
        }
    }

    void popfront() {
        Node* temp = head;
        if(head == NULL) {
            return;
        } else {
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void popback() {
        if(head == NULL) return;
        else if(head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            Node*prev=head;
            while(prev->next != tail) {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void print() {
        if (head == NULL) return;

        cout << head->data << "->"; //print head node first
        Node* temp = head->next;

        while (temp != head) { //start from the next node of the first node(head) until the while returns to the head again
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "(back to head)" << endl;
    }
};


int main() {
    Circularlist cll;
    cll.pushfront(10);
    cll.pushfront(20);
    cll.pushfront(30);
    cll.pushback(40);
    cll.pushback(70);

    cll.popfront(); //30 gone
    cll.popfront(); //20 gone

    cll.popback();
    cll.print();
    return 0;
}