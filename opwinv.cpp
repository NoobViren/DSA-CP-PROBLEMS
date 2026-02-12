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
        int ans = 0;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            int count = 0;
            if(v[i] == 1) continue;
            for(int j = i+1;j<n;j++){
               if(a[j]<a[i] && v[j] == 0){
                 count++;
                 v[j] = 1;
               }
            }
            ans+=count;
        }
        cout<<ans<<'\n';
    }
}