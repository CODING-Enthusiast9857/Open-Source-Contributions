#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v, weight;
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

// Disjoint Set Union-Find with path compression and union by rank
class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if(parent[x] != x)
            parent[x] = find(parent[x]); // path compression
        return parent[x];
    }

    bool unite(int x, int y) {
        int xRoot = find(x);
        int yRoot = find(y);

        if(xRoot == yRoot) return false; // already in the same set

        // union by rank
        if(rank[xRoot] < rank[yRoot]) {
            parent[xRoot] = yRoot;
        } else if(rank[xRoot] > rank[yRoot]) {
            parent[yRoot] = xRoot;
        } else {
            parent[yRoot] = xRoot;
            rank[xRoot]++;
        }
        return true;
    }
};

// Kruskal's algorithm
int kruskal(int V, vector<Edge>& edges, vector<Edge>& mst) {
    sort(edges.begin(), edges.end());
    DSU dsu(V);
    int mstWeight = 0;

    for(auto& edge : edges) {
        if(dsu.unite(edge.u, edge.v)) {
            mst.push_back(edge);
            mstWeight += edge.weight;
        }
    }
    return mstWeight;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<Edge> edges(E);
    cout << "Enter edges in the format (u v weight):" << endl;
    for(int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    vector<Edge> mst;
    int totalWeight = kruskal(V, edges, mst);

    cout << "\nMinimum Spanning Tree edges:\n";
    for(auto& edge : mst) {
        cout << edge.u << " - " << edge.v << " (Weight: " << edge.weight << ")\n";
    }
    cout << "Total weight of MST: " << totalWeight << endl;

    return 0;
}
