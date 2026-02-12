#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &x : a) cin>>x;
    for(int i = 0;i<n-1;i++){
        b[i] = abs(a[i]-a[i+1]);
    }
    int curr = 0,best = 0,flag = 0;
    for(int i = 0;i<n-1;i++){
        if(flag == 0){
            curr = max(b[i],curr + b[i]);
            best = max(best,curr);
            flag = 1;

        }
        else{
            curr = max(-b[i],curr - b[i]);
            best = max(best,curr);
            flag = 0;
        }
    }
    int curr1 = 0,best1 = 0,flag1 = 0;
    for(int i = 1;i<n-1;i++){
        if(flag1 == 0){
            curr1 = max(b[i],curr1 + b[i]);
            best1 = max(best1,curr1);
            flag1 = 1;

        }
        else{
            curr1 = max(-b[i],curr1 - b[i]);
            best1 = max(best1,curr1);
            flag1 = 0;
        }
    }
    cout<<max(best,best1)<<'\n';
    
}