#include <bits/stdc++.h>
using namespace std;

bool bfsCycle(int start, vector<int> adj[], vector<bool> &visited) {
    queue<pair<int, int>> q; // pair -> (node, parent)
    visited[start] = true;
    q.push({start, -1});

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, node});
            } else if (neighbor != parent) {
                // Visited and not parent => cycle detected
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (bfsCycle(i, adj, visited)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (isCycle(V, adj))
        cout << "Graph contains cycle\n";
    else
        cout << "Graph does not contain cycle\n";

    return 0;
}
