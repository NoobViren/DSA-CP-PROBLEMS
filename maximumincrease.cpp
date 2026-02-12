#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x :a) cin>>x;
    int l = 0,r=1;
    int m = 1;
    while(r<n){
        if(a[r]>a[r-1]){
            m = max(m,r-l+1);
        }
        else{
            l = r;
        }
        r++;
    }
    cout<<m<<'\n';
}