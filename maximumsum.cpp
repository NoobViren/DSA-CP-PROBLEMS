#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         int n,k;
         cin>>n>>k;
         vector<long long>a(n);
         for(auto &x : a){
            cin>>x;
         }
         sort(a.begin(),a.end());
         vector<long long>p(n);
         p[0] = a[0];
         for(int i=1;i<n;i++){
            p[i] = p[i-1] + a[i];
         }
         
         long long l = 1,r=n-1;
          long long m = 0;
          long long b = 0;
          
          while(k>0 && l<=r ){
            if( p[r] - p[l]-b>=p[r-1]){
                m = p[r]-p[l];
                b = p[l];
                l+=2;
            }
            else {
                m = p[r-1];
                r-=1;
            }
            k--;
          }
          
          cout<<m<<'\n';
    }
}