#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int src;
  cin>>src;
  vector<vector<int>>adj;
  vector<int>dist;
  dist[src] = 0;
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
  pq.push({0,src});

  while(!pq.empty()){
      auto [x,y] = pq.top();
      pq.pop();
      if(x < dist[y]) continue;

      for(auto [v,w] : adj[y]){
          if(dist[y] + w < dist[v]){
            dist[v] = dist[y] + w;
            pq.push({dist[v],v});
          }
      }
  }

}