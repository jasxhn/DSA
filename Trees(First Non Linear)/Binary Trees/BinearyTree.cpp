//trees are the first non linear ds, data not stored sequencially. 
//Same as Binary tree command in windows terminal.
//data stored in nodes. connexted by branches btween parent node and child node
//BINARY TREE : A TREEN WHERE EACH NODE HAS MAX 2 CHILD NODES
//for rest info, see notebook

#include <iostream>
#include <vector>
#include <queue>
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

//preorder = root->left->right
void preOrder(Node* root) { //TC : o(n)
    if(root == NULL) { //sequence : 1 2 3 4 5 
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//inorder = left->root->right; TC: O(n)
void inorder(Node* root) { //different sequence than inorder and postorder i.e 2 1 4 3  5
       if(root == NULL) { //root here means the node on which we are standing not the prime top element of the tree
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//postorder = left->right->root; TC : O(n)
void postorder(Node* root) { //sequence : 2 4 5 3 1
    if(root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node* root) { //sequence : 1 2 3 4 5
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 0) {
        Node*curr = q.front();
        q.pop();

        if(curr == NULL) {
            if(!q.empty()) {
                cout << endl;
                q.push(NULL);
                continue;
            } else {
                break;
            }
        }
        cout << curr->data << " ";
        if(curr->left != NULL) {
            q.push(curr->left);
        }
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder); //main fx knows that buildtree fx starts from root

    cout << "Root Value : " << root->data << endl;
    cout << "Left Child : " << root->left->data << endl;
    cout << "Right Child : " << root->right->data << endl;

    cout << "Preorder   : ";
    preOrder(root);
    cout << endl;

    cout << "Inorder    : ";
    inorder(root);
    cout << endl;

    cout << "Postorder  : ";
    postorder(root);
    cout << endl;

    cout << "Levelorder : ";
    levelorder(root);

    return 0;
}