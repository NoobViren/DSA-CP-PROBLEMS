#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<int>p(n),s(n);
    p[0] = a[0];
    for(int i =1;i<n;i++) p[i] = p[i-1] + a[i];
    
    vector<int>pref(n),suff(n);
    pref[1] = p[k-1];
    for(int i = 2;i<n;i++){
       pref[i] = max(pref[i-1],p[i]-p[i-k]);
    }
    suff[n-k] = p[n-1] - (n-k+1>0)?p[n-k+1]:0;
    for(int i = n-k-1;i>=0;i--){
        int curr = 
    } 
    
}