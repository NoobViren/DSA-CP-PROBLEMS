#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        sort(a.begin(),a.end());
        int groups = 0;
        int k = n;
        for(int i= n-1;i>=0;i--){
           if(a[i]*(k-i)>=x){
             groups++;
             k = i;
           }
        }
        cout<<groups<<'\n';
    }
}