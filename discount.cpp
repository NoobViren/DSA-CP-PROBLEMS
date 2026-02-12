#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        vector<long long>b(k);
        for(auto &x : a) cin>>x;
        for(auto &y : b) cin>>y;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long sum = accumulate(a.begin(),a.end(),0LL);  
        int x = n;
        int i = 0;
        while(x >= 0 && i < k){
            if(x - b[i] < 0) break; 
            x -= b[i];
            sum -= a[x];
            i++;
        }
        cout<<sum<<'\n';
    }
}