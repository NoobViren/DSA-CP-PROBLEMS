#include<bits/stdc++.h>
using namespace std;
long long solve(vector<long long>v,long long a){
    long long sum = 0;
    for(int i = 0;i<v.size();i++){
       if(v[i]<a){
        sum += (a-v[i]);
       }
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,x;
        cin>>n>>x;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        long long m = 1e10;
        long long ans = 0;
     long long low = 1,high = m;
     while(low<=high){
        long long mid = low + (high-low)/2;
        if(solve(v,mid)<=x){
           ans = mid;
           low = mid+1;
        }
        else{
            high = mid-1;
        }
     }
     cout<<ans<<endl;
    }
}