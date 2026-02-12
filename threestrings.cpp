#include<bits/stdc++.h>
using namespace std;
int solve(string a,string b,string c,int i,int j,int k){
    if(i==a.size() && j==b.size() && k == c.size()) return 0;
    int ans = 0;
    
    if(i<a.size() && k<c.size() && a[i]==c[k]){
        ans =   min(ans,solve(a,b,c,i+1,j,k+1));
    }
    if(j<b.size() && k<c.size() && b[j]==c[k]){
        ans =    min(ans,solve(a,b,c,i,j+1,k+1));
    }
    if(i<a.size()){
        ans = min(ans, 1 +  solve(a,b,c,i+1,j,k+1));
    }
    if(j<b.size()){
        ans = min(ans,1 + solve(a,b,c,i,j+1,k+1));
    }
    return ans;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int n  = c.size();
       int ans = solve(a,b,c,0,0,0);
       cout<<ans<<'\n';
       
        
     }
}