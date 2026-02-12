#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(auto &x : a) cin>>x;
    long long sum = 0;
    for(int i = 0;i<n;i++) sum+=a[i];
    long long m = *max_element(a.begin(),a.end());
    if(sum%2==0 && ((sum-m) >= m)){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    
}