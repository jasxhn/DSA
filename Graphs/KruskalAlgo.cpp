#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

bool cmp(Edge a, Edge b) {
    return a.weight < b.weight;
}

int findParent(int parent[], int i) {
    if (parent[i] == i) return i;
    return parent[i] = findParent(parent, parent[i]);
}

void unionSets(int parent[], int rank[], int x, int y) {
    int xroot = findParent(parent, x);
    int yroot = findParent(parent, y);

    if (rank[xroot] < rank[yroot])
        parent[xroot] = yroot;
    else if (rank[xroot] > rank[yroot])
        parent[yroot] = xroot;
    else {
        parent[yroot] = xroot;
        rank[xroot]++;
    }
}

void kruskalMST(vector<Edge> &edges, int V) {
    sort(edges.begin(), edges.end(), cmp);

    int parent[V], rank[V];
    for (int i = 0; i < V; i++)
        parent[i] = i, rank[i] = 0;

    vector<Edge> mst;

    for (auto &edge : edges) {
        int x = findParent(parent, edge.u);
        int y = findParent(parent, edge.v);

        if (x != y) {
            mst.push_back(edge);
            unionSets(parent, rank, x, y);
        }
    }

    cout << "Edge \tWeight\n";
    for (auto &edge : mst)
        cout << edge.u << " - " << edge.v << "\t" << edge.weight << endl;
}

int main() {
    int V = 5;
    vector<Edge> edges = {
        {0, 1, 2}, {0, 3, 6}, {1, 2, 3}, {1, 3, 8}, {1, 4, 5}, {2, 4, 7}, {3, 4, 9}
    };

    kruskalMST(edges, V);
    return 0;
}
