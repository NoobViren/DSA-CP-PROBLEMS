#include<bits/stdc++.h>
using namespace std;
// longest non decreasing subsequence with maximum cost

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),c(n);
        for(auto &x : a) cin>>x;
        for(auto &y : c) cin>>y;
        int ans = solve(a,1,0,c);
        cout<<ans<<'\n';

    }
}