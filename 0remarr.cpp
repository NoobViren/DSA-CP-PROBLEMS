#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(auto &x : a) cin>>x;
        long long x= 1;
        long long count = 1;
       
        for(long long i= 0;i<n;i++){
            a[i] = k - a[i]%k;
            
        }
        sort(a.begin(),a.end());
        
    long long max_x = 0;
    long long i = 0;
    while(i<a.size()){
        long long curr = a[i];
        long long count = 0;
        while(i<a.size() && a[i] == curr){
            i++;
            count ++;
        }
        long long curr_max = a[i] + (count-1)*k;
        max_x = max(max_x,curr_max);
    }
    cout<<max_x + 1<<'\n';
    




}
}