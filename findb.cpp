#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(auto&x : a) cin>>x;
        vector<int>p(n);
        p[0] = a[0];
        for(int i = 1;i<n;i++){
            p[i] = p[i-1] + a[i];
        }
        vector<int>ones(n);
        ones[0] = (a[0] == 1);
        for(int i = 1;i<n;i++){
            if(a[i] == 1){
                ones[i] = ones[i-1] + 1;
            }
            else{
                ones[i] = ones[i-1];
            }
        }
        
        while(q--){
            int x,y;
            cin>>x>>y;
            x--; y--;
            if(y == x){
                cout<<"NO"<<'\n';
                continue;
            }
            int sum = p[y] - ((x>0)?p[x-1]:0);
            int o = ones[y] - ((x>0)?ones[x-1]:0);
            if(sum > (y-x) + o && y>x){
                cout<<"YES"<<'\n';
            }
            else {
                cout<<"NO"<<'\n';
            }

        }
    }
}