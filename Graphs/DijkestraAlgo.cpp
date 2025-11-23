//algo used to find a single pasth through a graph to any node analysing weightage

#include <bits/stdc++.h>
using namespace std;

pair<vector<long long>, vector<int>> dijkstra(int n,
    const vector<vector<pair<int,int>>>& graph, int src) {

    const long long INF = (1LL<<60);
    vector<long long> dist(n, INF);
    vector<int> parent(n, -1);

    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;

        for (auto [v, w] : graph[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
    return {dist, parent};
}

vector<int> build_path(int target, const vector<int>& parent) {
    vector<int> path;
    for (int v = target; v != -1; v = parent[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    // Example graph (5 nodes, 6 edges, 0-indexed)
    int n = 5;
    vector<vector<pair<int,int>>> g(n);

    // edges: u, v, w
    g[0].push_back({1, 2});
    g[0].push_back({2, 4});
    g[1].push_back({2, 1});
    g[1].push_back({3, 7});
    g[2].push_back({4, 3});
    g[3].push_back({4, 1});

    int src = 0;  // start node

    auto [dist, parent] = dijkstra(n, g, src);

    cout << "Shortest distances from node " << src << ":\n";
    for (int i = 0; i < n; i++) {
        if (dist[i] == (1LL<<60)) cout << "Node " << i << ": INF\n";
        else cout << "Node " << i << ": " << dist[i] << "\n";
    }

    // Print shortest path to node 4
    int target = 4;
    if (dist[target] != (1LL<<60)) {
        auto path = build_path(target, parent);
        cout << "Path to node " << target << ": ";
        for (int v : path) cout << v << " ";
        cout << "\n";
    }

    return 0;
}
