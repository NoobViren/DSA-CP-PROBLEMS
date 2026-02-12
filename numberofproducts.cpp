#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<int>p(n);
    p[0] = a[0]<0;
    for(int i = 1;i<n;i++){
        if(a[i]<0){
            p[i] = (p[i-1] + 1)%2;

        }
        else  p[i] = p[i-1]%2;
        
    }
    // p[r] != p[l-1]
    long long ans = 0;
    int c1 = 1,c2 = 0;
    for(int i = 0;i<n;i++){
        if(p[i] == 0) c1++;
        if(p[i] == 1) c2++;
        ans += p[i] == 1?c1:c2;
    }
    int k = n*(n+1)/2;

    cout<<ans<<" "<<k-ans<<'\n';
}