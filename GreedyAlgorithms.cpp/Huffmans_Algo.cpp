// Node structure represents each character and its frequency in the Huffman tree // Compare struct is used to make a min-heap priority queue based on frequency // printCodes() recursively prints the Huffman codes for each character // Main function initializes character frequencies and pushes them into the priority queue // We merge the two smallest frequency nodes until only one root node remains // Finally, we call printCodes() to display Huffman codes

#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

// Node structure for Huffman Tree
struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

// Compare function for priority queue
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq; // Min-heap
    }
};

// Recursive function to print Huffman codes
void printCodes(Node* root, string str) {
    if (!root) return;

    // Leaf node
    if (!root->left && !root->right) {
        cout << root->ch << ": " << str << endl;
    }

    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

int main() {
    // Example: characters and their frequencies
    unordered_map<char, int> freq = {{'a', 5}, {'b', 9}, {'c', 12}, {'d', 13}, {'e', 16}, {'f', 45}};

    // Priority queue to build Huffman Tree
    priority_queue<Node*, vector<Node*>, Compare> pq;

    // Push all nodes to priority queue
    for (auto pair : freq) {
        pq.push(new Node(pair.first, pair.second));
    }

    // Build Huffman Tree
    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* merged = new Node('\0', left->freq + right->freq);
        merged->left = left;
        merged->right = right;
        pq.push(merged);
    }

    // Print Huffman codes
    Node* root = pq.top();
    cout << "Huffman Codes:\n";
    printCodes(root, "");

    return 0;
}
