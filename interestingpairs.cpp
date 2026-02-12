#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long>v(n);
        for(auto &x : v){ 
            cin>>x;

        }
        sort(v.begin(),v.end());
        long long ans = 0;
        for(int i= 0;i<n;i++){
            int a = lower_bound(v.begin()+i+1,v.end(),l-v[i]) - v.begin();
            int b = upper_bound(v.begin()+i+1,v.end(),r-v[i]) - v.begin();
            ans += b-a;
        }
        cout<<ans<<endl;
    }
}