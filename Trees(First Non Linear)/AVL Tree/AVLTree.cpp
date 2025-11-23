#include <iostream>
using namespace std;

class Node {
public:
    int data, height;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

// Function to get height of a node
int getHeight(Node* root) {
    if (!root) return 0;
    return root->height;
}

// Get balance factor
int getBalance(Node* root) {
    if (!root) return 0;
    return getHeight(root->left) - getHeight(root->right);
}

// Right rotation (LL rotation)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x; // new root
}

// Left rotation (RR rotation)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y; // new root
}

// Insertion with balancing
Node* insert(Node* root, int key) {
    // Normal BST insertion
    if (!root) return new Node(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    else
        return root; // duplicate not allowed

    // Update height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Get balance factor
    int balance = getBalance(root);

    // Case 1: Left Left
    if (balance > 1 && key < root->left->data)
        return rightRotate(root);

    // Case 2: Right Right
    if (balance < -1 && key > root->right->data)
        return leftRotate(root);

    // Case 3: Left Right
    if (balance > 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Case 4: Right Left
    if (balance < -1 && key < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root; // unchanged
}

// Preorder traversal
void preorder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 14);
    root = insert(root, 105);
    root = insert(root, 104);

    cout << "Preorder traversal of AVL tree: ";
    preorder(root);
    cout << endl;

    return 0;
}
