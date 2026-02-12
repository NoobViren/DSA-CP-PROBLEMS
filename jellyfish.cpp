#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>v(n);
        for(auto &x : v){
            cin>>x;
        }
        //if the timer is at 1, use a tool else let it cool down to 1 - only way to get max time
        long long count = b;
        
        long long k = 0;
     for(int i = 0;i<n;i++){
        count += min(a-1,v[i]);
    }
     
     cout<<count<<endl;
    }
}