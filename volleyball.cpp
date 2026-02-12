#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main(){
    int m,n;
    cin>>m>>n;
    int x,y;
    cin>>x>>y;
    vector<vector<array<int,2>>>adj(n+1);
    for(int i = 0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }
    vector<int>t(n),c(n);
    for(int i = 0;i<n;i++){
        cin>>t[i]>>c[i];
    }
    vector<vector<array<int,2>>>taxi(n+1);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i = 1;i<=n;i++){
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,i});
        vector<int>d(n+1,INF);
        d[i] = 0;
        while(!pq.empty()){
            auto [dist,node] = pq.top();
            pq.pop();
            if(dist>t[i-1]){
                break;
            }
            if(dist>d[node]) continue;
            taxi[i].push_back({node,c[i-1]});
            for(auto &it : adj[node]){
                int next = it[0],weight = it[1];
                if(dist + weight< d[next] && dist + weight <= t[i-1]){
                    
                    d[next] = dist + weight;
                    pq.push({dist+weight,next});
                     
                }
            }
        }
    }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(n+1,INF);
        pq.push({0,x});
        dist[x] = 0;
        
        while(!pq.empty()){
            auto [cost,node] = pq.top();
            pq.pop();
            if(cost>dist[node]) continue;
            
            for(auto u : taxi[node]){
                int next = u[0],weight = u[1];
                if(cost + weight<dist[next]){
                    int ncost = cost + weight;
                    dist[next] = ncost;
                    pq.push({ncost,next});
                    
                }
            }
        }
        cout<<dist[y]<<'\n';
    
    
}
    

    
    
