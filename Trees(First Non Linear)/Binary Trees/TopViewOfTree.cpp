#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

void topView(Node* root) {
    if (!root) return;
    queue<pair<Node*, int>> q;  // {node, horizontal distance}
    map<int, int> m;            // hd -> node data
    
    q.push({root, 0});
    
    while (!q.empty()) {
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();
        
        if (m.find(currHD) == m.end()) {
            m[currHD] = curr->data; // Store only first occurrence
        }
        
        if (curr->left) {
            q.push({curr->left, currHD - 1});
        }
        if (curr->right) {
            q.push({curr->right, currHD + 1});
        }
    }
    
    for (auto p : m) {
        cout << p.second << " ";
    }
    cout << endl;
}

int main() {
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    idx = -1; // Reset before building tree
    Node* root = buildTree(preorder);
    
    cout << "Top view: ";
    topView(root);
    
    return 0;
}
