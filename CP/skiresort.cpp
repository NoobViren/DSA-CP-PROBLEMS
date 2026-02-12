#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            cin>>v[j];
        }
        int count = 0;
        vector<int>ans;
       int l =0;
       while(l<n){
         if(v[l]>q){
            l++;
         }
         int r = l;
         while(r<n && v[r]<=q){
            r++;
         }
         ans.push_back(r-l);
        l = r;
    }
    long long sum = 0;
    for(int i = 0;i<ans.size();i++){
        int a = ans[i];
        if (a >= k) {
            long long cnt = a - k + 1;
            sum += (cnt * (cnt + 1)) / 2;
        }
    }
    cout<<sum<<endl;
}
}