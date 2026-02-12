#include<bits/stdc++.h>
using namespace std;
long long solve(vector<long long>&a,long long i,long long h,long long g,long long b){
    if(i==a.size()) return 0;
long long op1 = 0,op2 = 0,op3 = 0;
    long long ans = 0;
    if(h>a[i]){
        return 1 + solve(a,i+1,h+a[i]/2,g,b);
        
    }
    if(g>0) ans = max(ans,solve(a,i,2*h,g-1,b));
    if(b>0) ans = max(ans,solve(a,i,3*h,g,b-1));
    return ans;
    
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,h;
        cin>>n>>h;
        vector<long long>a(n);
        for(auto &x : a) cin>>x;
        sort(a.begin(),a.end());
        long long ans = solve(a,0,h,2,1);
        if(ans == INT_MIN) cout<<0<<'\n';
        else cout<<ans<<'\n';

    }
}