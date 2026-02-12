#include<bits/stdc++.h>
using namespace std;
map<pair<long long,long long>,long long>mpp;
long long solve(vector<pair<long long,long long>>&v,long long i,long long sum,long long x,long long m){
    if(i==m) return 0;
    if(mpp.count({i,sum})>0) return mpp[{i,sum}];
    if((sum==0 && v[i].first>sum)|| v[i].first>sum){
        return mpp[{i,sum}] = solve(v,i+1,sum+x,x,m);
    }
   else if(v[i].first<=sum){
    return mpp[{i,sum}] = max(solve(v,i+1,sum+x,x,m),v[i].second + solve(v,i+1,sum+x-v[i].first,x,m));
   }
   
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        mpp.clear();
        long long m,x;
        cin>>m>>x;
        vector<pair<long long,long long>>v(m);
        for(auto &y : v){
            cin>>y.first>>y.second;
        }
        long long ans = solve(v,0,0,x,m);
        cout<<ans<<'\n';

    }
}