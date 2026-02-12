#include<bits/stdc++.h>
using namespace std;
//this question follows a monotonic property... if its true for k ..it must be true for greater values too... hence we check for lower va;ues

bool check(vector<pair<int,int>>&p,int k){
   int L=0,R=0;
   for(auto [l,r] : p){
     int newL = L-k;
     int newR = R+k;
     L = max(newL,l);
     R = min(newR,r);
     if(L>R) return false;
   }
   return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>p(n);
        for(auto &x : p) cin>>x.first>>x.second;
        int low = 0;
        int m = 0;
        for(auto i : p){
            m = max(m,i.second);
        }
        
        int mid = 0;
        int high = m;
        int ans = 0;
        while(low<=high){
            mid = low + (high-low)/2;
           if(check(p,mid)){
            ans = mid;
              high = mid-1;
           }
           else low = mid+1;
        }
        cout<<ans<<'\n';
    }
}