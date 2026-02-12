#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k;
    cin>>n>>m>>k;

    vector<unordered_set<int>> forbidden(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        --a;--b;
        forbidden[a].insert(b);
        forbidden[b].insert(a);
    }

    // degree condition for node 0 in complement graph
    if(n-1-(int)forbidden[0].size()!=k){
        cout<<"impossible\n";
        return 0;
    }

    set<int> unvis;
    for(int i=0;i<n;i++) unvis.insert(i);

    vector<int> vis(n,0);
    queue<int> q;
    q.push(0);
    vis[0]=1;
    unvis.erase(0);

    while(!q.empty()){
        int u=q.front(); q.pop();

        vector<int> toVisit;
        for(int v:unvis){
            if(!forbidden[u].count(v))
                toVisit.push_back(v);
        }

        for(int v:toVisit){
            vis[v]=1;
            q.push(v);
            unvis.erase(v);
        }
    }

    for(int i=0;i<n;i++){
        if(!vis[i]){
            cout<<"impossible\n";
            return 0;
        }
    }

    cout<<"possible\n";
}
