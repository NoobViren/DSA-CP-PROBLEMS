#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(int x,int k,int y,int mid){
    for(int i = 0;i<x;i++){
        mid -= (mid/y);
        
    }
    if(mid>=k) return true;
    return false;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        vector<int>temp;
        int sum = 0;
        
        
        int low =1 ,high = 1e12;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(x,k,y,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
        }
        cout<<ans<<'\n';
    }
}