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

Node* buildTree(vector<int>& preorder) {
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1) {
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

void kthlevel(Node* root, int k) {
    if (root == NULL) return; // <-- important null check
    if (k == 1) {
        cout << root->data << " ";
        return;
    }
    kthlevel(root->left, k - 1);
    kthlevel(root->right, k - 1);
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    idx = -1; // reset before building
    Node* root = buildTree(preorder);

    cout << "Nodes at level 3: ";
    kthlevel(root, 3);
    cout << endl;

    return 0;
}
