#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to;
    int cost;
};

struct State {
    int node;
    int g;   //cost so far
    int f;   //g + h
};

bool operator>(const State &a, const State &b) {
    return a.f > b.f;
}

vector<int> astar(
    int n,
    vector<vector<Edge>> &adj,
    int start,
    int goal,
    vector<int> &heuristic
) {
    const int INF = 1e9;

    vector<int> g(n, INF);
    vector<int> parent(n, -1);
    vector<bool> closed(n, false);

    priority_queue<State, vector<State>, greater<State>> pq;

    g[start] = 0;
    pq.push({start, 0, heuristic[start]});

    while (!pq.empty()) {
        State cur = pq.top();
        pq.pop();

        int u = cur.node;

        if (closed[u]) continue;
        closed[u] = true;

        if (u == goal) break;

        for (auto &e : adj[u]) {
            int v = e.to;
            int cost = e.cost;

            if (closed[v]) continue;

            int new_g = g[u] + cost;
            if (new_g < g[v]) {
                g[v] = new_g;
                parent[v] = u;
                int f = new_g + heuristic[v];
                pq.push({v, new_g, f});
            }
        }
    }

    //Reconstruct path
    vector<int> path;
    if (g[goal] == INF) return path; //no path

    for (int v = goal; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());
    return path;
}
int main() {
    int n = 6;
    vector<vector<Edge>> adj(n);

    auto add_edge = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    add_edge(0, 1, 1);
    add_edge(1, 2, 2);
    add_edge(0, 3, 4);
    add_edge(3, 4, 1);
    add_edge(4, 2, 1);
    add_edge(2, 5, 3);

    //estimated distance to node 5
    vector<int> h = {7, 6, 3, 5, 4, 0};

    vector<int> path = astar(n, adj, 0, 5, h);

    if (path.empty()) {
        cout << "No path\n";
    } else {
        for (int x : path) cout << x << " ";
        cout << "\n";
    }
}
