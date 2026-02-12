#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    int ones = 0;
    for(int i = 0;i<n;i++){
        if( a[i] == 1){
            ones++;
        }
    }
    int l = -1,r = -1;
    int len = INT_MAX;
    for(int i = 0;i<n;i++){
        int hcf = a[i];
        for(int j = i;j<n;j++){
            hcf = __gcd(hcf,a[j]);
            if(hcf == 1 && j-i<len){
                len = j-i;
                l = i;
                r = j;
            }
        }
    }
    if(l == -1 && r == -1) cout<<-1<<'\n';
    else{
    int ans = l + (n-r-1) + 2*(r-l) - ((ones>1)?(ones-1):0);
    cout<<ans<<'\n';
    }
}