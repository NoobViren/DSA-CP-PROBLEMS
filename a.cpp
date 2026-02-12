#include<bits/stdc++.h>
using namespace std;

#define int long long
int digsum(int x){
    int sum = 0;
    while(x){
        sum += x%10;
        x = x/10;
    }
    return sum;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        for(int i = n;i<=n+162;i++){
            if(i == n + digsum(i)){
               count++;
            }
        }
        cout<<count<<'\n';
    }
}