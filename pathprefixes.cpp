#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>adj;
vector<int>a,b,pb,ans;
int cura = 0,curb = 0;
void dfs(int x){
  cura += a[x];
  curb += b[x];
  pb.push_back(curb);
  ans[x] = upper_bound(pb.begin(),pb.end(),cura) - pb.begin()-1;
  for(auto i : adj[x]){
      dfs(i);
  }
  cura-=a[x];
  curb -=b[x];
  pb.pop_back();

}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        adj.assign(n+1, {});
        a.assign(n+1, 0);
        b.assign(n+1, 0);
        ans.assign(n+1, 0);
        pb.clear();
        cura = 0;
        curb = 0;
        a[1] = 0;
        b[1] = 0;
        for(int i = 2;i<=n;i++){
            int ances,ai,bi;
            cin>>ances>>ai>>bi;
            adj[ances].push_back(i);
            a[i] = ai;
            b[i] = bi;
        }
        dfs(1);
        for(int i = 2;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
        
    }
    // had a problem in implementing it...idea was clear ... we need the prefix from the root...the only suitable traversal is bfs...we store the prefix of a and b(only b in an array) 
    // we need the largest prefix of b which is less than or equal to prefix of a till that node...
        
}
