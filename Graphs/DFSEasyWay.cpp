//refer chatgpt for explaination

#include <iostream>
#include <vector>
#include <list>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool>&visited) {
    visited[node] = true;
    cout << node << " ";

    for(int neighbour : adj[node]) {
        if(!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
    }
}

int main() {
    int V = 5; //vertices will be 5
    vector<vector<int>> adj(V); //adj list

    // Add edges (undirected)
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[1].push_back(4);
    adj[4].push_back(1);

    vector<bool>visited(V, false);
    cout << "DFS Traversal : ";
    dfs(0, adj, visited);
    cout << endl;
}