#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    int k = m;
    for(auto &x : a) cin>>x;
    sort(a.begin(),a.end());
    for(int i = 0;i<n-1;i++){
        int diff = a[n-1] - a[i];
        m-=diff;
        if(m<=0){
            break;
        }
    }
    int ans = a[n-1];
    if(m>0){
     
        if(m%n==0){
           ans = a[n-1] + m/n;
        }
        else ans = a[n-1] + m/n +1;
        cout<<ans<<" "<<a[n-1]+k<<" ";
    }
    else {
        cout<<a[n-1]<<" "<<a[n-1]+k<<'\n';
    }

}