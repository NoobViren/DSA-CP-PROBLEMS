#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1 || n==2){
            cout<<0<<'\n';
            continue;
        }
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        int ans = 0;
        int lastb = INT_MAX,lastc = INT_MAX;
        for(int i = 0;i<n;i++){
            
            
            if(a[i]<=lastb){
                lastb = a[i];
            }
            else if(a[i]<=lastc){
               lastc = a[i];

            }
            else {
                if(lastc<lastb) lastc = a[i];
                else lastb = a[i];
                ans++;
            }
        }
        
        
        cout<<ans<<'\n';
    }
}