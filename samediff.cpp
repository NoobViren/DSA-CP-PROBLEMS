#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(auto &x : a) cin>>x;
        vector<long long>temp;
        for(long long i = 0;i<n;i++){
            temp.push_back(a[i]-i);
        }
        map<long long,long long>mpp;
        set<long long>s;
        for(long long i = 0;i<n;i++){
            mpp[temp[i]]++;
        }
        long long ans = 0;
        for(long long i = 0;i<n;i++){
            if(s.count(temp[i])) continue;
            long long k = mpp[temp[i]];
            if(k>1){
               ans += k*(k-1)/2;
               s.insert(temp[i]);
            }
        }
        cout<<ans<<'\n';
    }
}