#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
   int t;
   cin>>t;
   while(t--){
    int n,p,k;
    cin>>n>>p>>k;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    sort(a.begin(),a.end());
    int ans = 0;
    
    vector<int>pref(n);
    pref[0] = a[0];
    for(int i= 1;i<n;i++) pref[i] = pref[i-1] + a[i];
    for(int i = 0;i<=k;i++){
        int prev = i>0?pref[i-1]:0;
        int rem = p-prev;
        int count = i;
        if(rem<0) break;
        
        for(int j = i+k-1;j<n;j+=k){
            if(rem>=a[j]){
                count+=k;
                rem-=a[j];
                
            }
            else break;
        }
        ans = max(ans,count);
        

        
    }
    cout<<ans<<'\n';
       
   }
}