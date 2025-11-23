// Connected components in a graph are the maximal sets of vertices such that every pair of vertices in the set is connected by a path, and no additional vertex outside the set is connected to any of them.
// In simpler words:
// A connected component is like a "sub-island" of the graph where you can travel from any node to any other node within that island, but you can’t get to nodes in another island without "jumping water." 🌊
// For example:
// If you have a graph with 6 nodes, and edges only connect {1,2,3} together and {4,5} together, with node 6 all alone → then your graph has 3 connected components:
// Component 1: {1,2,3}
// Component 2: {4,5}
// Component 3: {6}

#include "bits/stdc++.h"
using namespace std;
vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> components;
int get_comp(int idx) {
    if(vis[idx]) {
        return 0;
    }
    vis[idx] = true;
    int ans = 1;
    for(auto i : adj[idx]) {
        if(!vis[i]) {
            ans+=get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}
int32_t main() {
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, 0);
    for(int i = 0; i<m ; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            components.push_back(get_comp(i));
        }
    }
    for(auto i : components) {
        cout << i << " ";
    }
}