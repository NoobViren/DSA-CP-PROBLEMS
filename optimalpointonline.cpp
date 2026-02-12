#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    sort(a.begin(),a.end());
    int ans = a[(n-1)/2];
    cout<<ans<<'\n';
    
}
