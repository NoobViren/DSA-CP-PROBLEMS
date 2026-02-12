#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    int sum = accumulate(a.begin(),a.end(),0);
    int avg = sum/n;
   if(x>avg){
    cout<<"NO"<<'\n';
   }
   else{
    cout<<"YES"<<'\n';
   }

    }
}