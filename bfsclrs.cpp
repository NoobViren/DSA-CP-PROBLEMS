#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> m;

    vector<vector<int>> adj(n+1);

    cout << "Enter the edges (u v) one per line:" << endl;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        
    }

    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    vector<int> bfs;
    vector<int> parent(n+1, -1);
    vector<int> dis(n+1, -1);
    vector<bool> visited(n+1, false);

    queue<int> q;
    q.push(source);
    visited[source] = true;
    dis[source] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                q.push(neigh);
                visited[neigh] = true;
                dis[neigh] = dis[node] + 1;
                parent[neigh] = node;
            }
        }
    }

    cout << "\nBFS Traversal: ";
    for (int v : bfs) cout << v << " ";
    cout << endl;

    cout << "Parent of all vertices:" << endl;
    for (int i = 1; i <= n; i++) cout << "Vertex " << i << " -> Parent: " << parent[i] << endl;

    cout << "\nDistance of all vertices from " << source << ":" << endl;
    for (int i = 1; i <= n; i++) cout << "Vertex " << i << " -> Distance: " << dis[i] << endl;
}
