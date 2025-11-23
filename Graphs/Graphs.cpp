// see notebook

#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class graph {
    int V;
    list <int> *l; //int *arr

    public:
    graph(int V) {
        this->V = V;
        l= new list<int> [V];
    }

    void addedge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printadl() {
        for(int i=0; i<V; i++) {
            cout << i << " : ";
            for(int neigh : l[i]) {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    void bfstraversal() {
        queue<int> Q;
        vector<bool> vis(V, false);
        Q.push(0);
        vis[0] = true;

        while(Q.size() > 0) {
            int u = Q.front();
            Q.pop();

            cout << u << " ";

            for(int v : l[u]) {
                if(!vis[v]) {
                    vis[u] = true;
                    Q.push(v);
                }
            }
        }
        cout << endl;
    }

    void dfstraversal(int u, vector<bool> &vis) {
        cout << u << " ";
        vis[u] = true;

        for(int v : l[u]) {
            if(!vis[u]) {
                dfstraversal(v, vis);             
            }
        }
    }

    void dfs() {
        int src = 0;
        vector<bool> vis(V, false);

        dfstraversal(src, vis);
        cout << endl;
    }
};

int main() {
    graph g(5);

    g.addedge(0,1);
    g.addedge(1,1);
    g.addedge(1,3);
    g.addedge(2,4);

    g.printadl();

    g.bfstraversal();

    g.dfs();
    return 0;
}