#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; 
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    vector<int> indeg(n+1,0);

    while(m--) {
        int u,v; cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    for(int i=1;i<=n;i++) if(indeg[i]==0) q.push(i);

    while(!q.empty()) {
        int u=q.front(); q.pop();
        cout<<u<<" ";
        for(int v:g[u]) if(--indeg[v]==0) q.push(v);
    }
}
