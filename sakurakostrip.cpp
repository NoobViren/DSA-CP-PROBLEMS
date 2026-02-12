#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a){
            cin>>x;

        }
        int l = 1,r=n-2;
        while(l<r){
           if(a[l]!=a[r]){
              if(a[l]==a[l-1]){
                swap(a[l],a[r]);
              }
              else if(a[r]==a[r+1]){
                swap(a[l],a[r]);
              }
           }
           r--;
           l++;
        }
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            if(a[i]==a[i+1]){
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
}