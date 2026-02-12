#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,p,l,t;
        cin>>n>>p>>l>>t;
        long long ans = 0;
        long long low = 0,high = n;
        long long x = ceil(n/7);
        while(low<=high){
            long long mid = low + (high-low)/2;
            int k = n-mid;
            int a =ceil(k/7);
            if(p - a*t - k*l>=0){
                ans = mid;
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        cout<<ans<<'\n';
        
    }
}