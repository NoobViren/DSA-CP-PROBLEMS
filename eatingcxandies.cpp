#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int i;
        vector<int>pfs(n);
        
        pfs[0] = v[0];
        for(i = 1;i<n;i++){
            pfs[i] = pfs[i-1] + v[i];
        }
        
        int sum = 0;
        int ans = 0;
        for(i =n-1;i>=0;i--){
            sum +=v[i];
            int idx = lower_bound(pfs.begin(),pfs.begin()+i,sum)-pfs.begin();//subtracting the iterator gives the zero based index of the found elemet
            if(idx < i && pfs[idx] == sum){
                ans = max(ans,idx+1 + n-i);
            }
        }
      
        cout<<ans<<endl;
    }
}