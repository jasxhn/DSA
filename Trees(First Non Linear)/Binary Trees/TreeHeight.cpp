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

static int idx = -1;
Node* buildTree(vector<int> preorder) { //TC : O(n)
    idx++;

    if(preorder [idx] == -1) {
        return NULL; 
    }

    Node* root = new Node(preorder[idx]); //MAKES ROOT NODE, AFTER POINTER++ IN ELEMENT LIST
    root->left = buildTree(preorder); //LEFT
    root->right = buildTree(preorder); //RIGHT

    return root;
}

//height of the tree
int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht, rightht) + 1; //max(leftth, rightth) is the function that see which one edge is bigger from left subtree and right one and then + 1 because on root edge is also there.
}

//no of nodes of tree
int count(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftct = count(root->left);
    int rightct = count(root->right);
    return (leftct + rightct + 1);
}

//sum of nodes
int sum(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    return leftsum + rightsum + root->data;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    cout << "height : " << height(root) << endl;
    cout << "no of nodes in tree : " << count(root) << endl;
    cout << "Sum of all nodes : " << sum(root) << endl;
    return 0;
}