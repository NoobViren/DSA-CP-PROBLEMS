#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(auto &x : a) cin>>x;
        for(auto &y : b) cin>>y;
        vector<int>p(n),s(n);
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=a[i];
            if(sum<0){
                sum = 0;
                p[i] = 0;
            }
            else{
                p[i] = sum;
            }
        }
        for(int i = n-1;i>=0;i--){
             sum+=a[i];
            if(sum<0){
                sum = 0;
                s[i] = 0;
            }
            else{
                s[i] = sum;
            }
        }
        int ans = 0;
        ans = max(ans,a[0]+b[0]+s[1]);
        for(int i = 1;i<n-1;i++){
          ans = max(ans,a[i]+b[i]+p[i-1] + s[i+1]);
        }
        ans = max(ans,a[n-1]+b[n-1]+p[n-2]);
        cout<<ans<<'\n';
    }
}