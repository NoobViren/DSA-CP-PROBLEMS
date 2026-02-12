#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int>v(n+1);
        for(int i = 1;i<=n;i++) cin>>v[i];
        vector<int>p(n+1);
        p[0] = v[0];
        for(int i = 1;i<=n;i++){
            p[i] = p[i-1] + v[i];
        }
        
        
        
        int ans = 1e18;
        for(int i = 0;i<=n;i++){
            ans = min(ans,(a+b)*(v[i]) +  (p[n]-p[i] - (n-i)*v[i])*b);
        }
        cout<<ans<<'\n';
    }
}