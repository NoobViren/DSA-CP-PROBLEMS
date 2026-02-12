
#include<bits/stdc++.h>
using namespace std;

vector<int>tree[200001];
void dfs(int u,int p,vector<int>&ans){
    int subords = 0;
    for(auto child : tree[u]){
        if(child != p){
            dfs(child,u,ans);
            subords += 1 + ans[child];
        }
    }
    ans[u] = subords;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i = 0;i<n-1;i++) cin>>v[i];
    for(int i = 2;i<=n+1;i++){
       tree[i].push_back(v[i-2]);
       tree[v[i-2]].push_back(i);
    }
    
}
    
    

