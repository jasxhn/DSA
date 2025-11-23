/*
4 major functions of a linked list:
1. pushfront
2. pushback
3. pop front 
4. pop back

synatx to create a new node
Node* newNode = new Node(val); //dynaic and is used
Node newNode(val); //static NOT USED

ptr->x means (*ptr).x
node->next means go to the node and grab the pointer to the next
node->next->data means go two levels deep and grab the data

middle of the linked list is[size/2] + 1
*/

#include <iostream>
using namespace std;

//make a node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

//make a list
class List {
    Node* head;
    Node* tail;

public:
    List() { // constructor
        head = tail = NULL;
    }

    void push_front(int val) { //0(1)
        Node* newNode = new Node(val); //dynamic and a node while left side is a newNode named pointer with datatype node
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) { //O(1)
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = NULL;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() { //O(1)
        if(head == NULL) {
            cout << "Linked List is emply." << endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back() { //O(n)
        if(head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node*temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos) { //O(n)
        if(pos < 0) {
            cout << "Invalid Pos\n";
            return;
        }
        if(pos == 0) {
            push_front(val);
            return;
        }
        Node*temp = head;
        for(int i=0; i<pos-1; i++) {
            if(temp == NULL) {
                cout << "Invalid pos\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key) { //O(n)
    Node* temp = head;
    int idx = 0;
    while(temp != NULL) {
        if(temp->data == key) {
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1; // Not found
}


    void printLL() { //O(n)
        Node* temp = head;
        while(temp!=NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main() {
    //create a linked list to call
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.push_back(90);
    ll.push_back(900);

    ll.pop_front();
    ll.pop_back();

    ll.insert(4, 1);
    ll.insert(8, 2);

    cout << ll.search(4) << endl;

    ll.printLL();
    return 0;
}