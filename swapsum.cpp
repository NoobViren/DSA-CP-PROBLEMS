#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<int>pref(n);
    pref[0] = a[0];
    for(int i = 0;i<n;i++){
        pref[i] = pref[i-1]+1;
    }
    while(q--){
        int x;
        cin>>x;
        if(x == 1){
            int y;
            cin>>y;
            y--;
            if(y<n-1){
            swap(a[y],a[y+1]);
            pref[y] = pref[y-1] + a[y];
            }
        }
        else{
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            
            int sum = pref[r] - (l>0)?pref[l-1]:0;
            cout<<sum<<'\n';
        }
    }
}