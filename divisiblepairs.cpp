#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n, x, y;
    cin >> n >> x >> y;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Step 1: store remainders
    vector<int> rx(n), ry(n);
    for (int i = 0; i < n; i++) {
        rx[i] = ((a[i] % x) + x) % x;
        ry[i] = ((a[i] % y) + y) % y;
    }

    // Step 2: find all pairs satisfying sum condition
    set<pair<int,int>> pairsX;
    unordered_map<int, vector<int>> posX;
    for (int i = 0; i < n; i++) {
        posX[rx[i]].push_back(i);
    }
    for (int i = 0; i < n; i++) {
        int need = (x - rx[i]) % x;
        if (posX.count(need)) {
            for (int j : posX[need]) {
                if (i < j) pairsX.insert({i, j});
            }
        }
    }

    // Step 3: find all pairs satisfying diff condition
    set<pair<int,int>> pairsY;
    unordered_map<int, vector<int>> groups;
    for (int i = 0; i < n; i++) {
        groups[ry[i]].push_back(i);
    }
    for (auto &kv : groups) {
        auto &indices = kv.second;
        for (int i = 0; i < (int)indices.size(); i++) {
            for (int j = i+1; j < (int)indices.size(); j++) {
                pairsY.insert({indices[i], indices[j]});
            }
        }
    }

    // Step 4: intersection
    int ans = 0;
    for (auto &p : pairsX) {
        if (pairsY.count(p)) ans++;
    }

    cout << ans << "\n";
    
  }
}
