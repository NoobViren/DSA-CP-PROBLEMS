#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &x : a) cin>>x;
    for(auto &y : b) cin>>y;
    map<long double,int>mpp;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(a[i] == 0 && b[i]==0) {
            count++;
            continue;
        }
        else if(a[i] == 0) continue;
       long double k = -((long double)b[i]/a[i]);
        mpp[k]++;
    }
    int ans = 0;
    for(auto i : mpp){
        int x = i.second;
        ans = max(ans,x);
    }
    cout<<ans+count<<'\n';
}