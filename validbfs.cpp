#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i= 0;i<n-1;i++){
       int x,y;
       cin>>x>>y;
       adj[x].push_back(y);
       adj[y].push_back(x);


    }
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    queue<int>q;
    q.push(1);
    vector<int>visited(n+1);
    visited[1] = 1;
    vector<vector<int>>trav(n+1);
    int layer = 0;
    while(!q.empty()){
        int s = q.size();
        
        for(int i = 0;i<s;i++){
            int k = q.front();
            q.pop();
            trav[layer].push_back(k);
            for(auto u : adj[k]){
                if(!visited[u]){
                    visited[u] = 1;
                    q.push(u);
                }
            }
        }
        sort(trav[layer].begin(),trav[layer].end());
        layer++;
    }
    
   
}