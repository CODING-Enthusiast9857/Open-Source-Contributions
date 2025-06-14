#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// A pair of (distance, vertex)
typedef pair<int, int> PII;

// Function to perform Dijkstra's algorithm
vector<int> dijkstra(int V, vector<vector<PII>>& adj, int source) {
    vector<int> dist(V, INT_MAX); 
    priority_queue<PII, vector<PII>, greater<PII>> pq; 

    dist[source] = 0;
    pq.push({0, source});

    while(!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue; 
        for(auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if(dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<PII>> adj(V);

    cout << "Enter edges in format (u v weight):\n";
    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }

    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    vector<int> distances = dijkstra(V, adj, source);

    cout << "\nShortest distances from source " << source << ":\n";
    for(int i = 0; i < V; i++) {
        cout << "To vertex " << i << ": ";
        if(distances[i] == INT_MAX)
            cout << "INF" << endl;
        else
            cout << distances[i] << endl;
    }

    return 0;
}
