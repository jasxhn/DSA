//the left child nodes are less value theb parent node and even lesser then nodes in right subtree.
//left < par < right
//assumes that all the elements are unique
/*
       5
     /   \
    3     7
   / \   / \
  2  4  6  8
*/
//TC : O(n) in search
//sorted sequence

#include <iostream>
#include <vector>
using namespace std;

class Node { 
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;
    for (int val : arr) {
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " "; // Added space
    inorder(root->right);
}

bool search(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;
    if (key < root->data) return search(root->left, key);
    else return search(root->right, key);
}

Node* getInorder(Node* root) {
    while (root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root; // Added missing return
}

Node* deleteNode(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Case 1: No left child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // Case 2: No right child
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        Node* IS = getInorder(root->right);
        root->data = IS->data;
        root->right = deleteNode(root->right, IS->data);
    }
    return root;
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node* root = buildBST(arr);

    inorder(root);
    cout << endl;

    cout << search(root, 8) << endl; // 0
    cout << search(root, 3) << endl; // 1

    root = deleteNode(root, 6);

    inorder(root);
    return 0;
}
