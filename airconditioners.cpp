#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>pos(k),temp(k);
    for(auto &x : pos) cin>>x;
    for(auto &x : temp) cin>>x;
    vector<int>dist(n+1,1e18);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i = 0;i<k;i++){
        dist[pos[i]] = temp[i];
        pq.push({temp[i],pos[i]});
    }
    while(!pq.empty()){
        auto [d,u] = pq.top();
        pq.pop();
        if(d> dist[u]) continue;
        if(u-1>=1 && dist[u-1]>d+1){
            dist[u-1] = d+1;
            pq.push({dist[u-1],u-1});
        }
        if(u+1<=n && dist[u+1]>d+1){
            dist[u+1] = d+1;
            pq.push({dist[u+1],u+1});
        }

    }
    for(int i = 1;i<=n;i++){
        cout<<dist[i]<<" ";
    }
    cout<<'\n';


  }
}