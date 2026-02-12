#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    
    int n;
    cin>>n;
    vector<int>a(n),p(n);
    for(int i = 0;i<n;i++) {
       cin>>a[i];
       p[i] = a[i] - i;
       
    }
    map<int,int>mpp;
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(mpp.find(p[i]) == mpp.end()){
            mpp[p[i]] = a[i];
        }
        else mpp[p[i]]+=a[i];
        ans = max(ans,mpp[p[i]]);

    }
    cout<<ans<<'\n';
}