#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>adj;
vector<int>h;
void dfs(int start,int parent,int depth){
    bool leaf = true;
    
    for(auto &x : adj[start]){
        if(x!= parent){
            leaf = false;
            dfs(x,start,depth+1);
        }
    }
    if(leaf == true){
        h.push_back(depth);
    }

}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        
        for(int i = 0;i<n;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);

        }
        dfs(1,0,0);
        
        

        
        
        

    }
}