#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l,s,t;
    cin>>n>>m>>l>>s>>t;
    vector<vector<array<int,2>>>adj(n+1);//whenever nodes are 1 - indexed ..always create nd aj list of size n+1
    for(int i = 0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        adj[x].push_back({y,z});
    }
    queue<array<int,3>>q;//node edges and weight
    q.push({1,0,0});
    vector<vector<vector<int>>>visited(n+1,vector<vector<int>>(l+1,vector<int>(t+1,0)));
    visited[1][0][0] = 1;
    
    while(!q.empty()){
        auto [node,edges,cost] = q.front();
        q.pop();
        if(edges==l && cost>=s && cost<=t){
            cout<<node<<" ";
            continue;
        }
        if(edges>l || cost>t){
            continue;
        }
        for(auto &i : adj[node]){
            int newnode = i[0],newcost = i[1];
            if(cost+newcost>t || edges+1>l) continue;//this line is esssential else it willl cause an out of bounds access...
            
            if(!visited[newnode][edges+1][cost+newcost]){
                visited[newnode][edges+1][cost+newcost] =1;
                q.push({newnode,edges+1,newcost + cost});
            }
            
        }

            cout<<'\n';
    }
}