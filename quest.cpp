#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        int x = 0;
        for(x= 0;x<n;x++){
            cin>>a[x];
        }
        for(x= 0;x<n;x++){
            cin>>b[x];
        }
        int m = b[0];
        int ans = a[0];
      int count = 1,l=1,r=1;
        while(count!=k && l<n && r<n){
            
            if(a[l]>=m){
                ans+=a[l];
                count++;
                l++;
                r++;
                
            }
            else if(m>a[l]){
                ans+=m;
                count++;
            }
            m = max(m,b[r]);
        }
        while(count<k){
            ans+=m;
            count++;
        }
        cout<<ans<<endl;
    }
}