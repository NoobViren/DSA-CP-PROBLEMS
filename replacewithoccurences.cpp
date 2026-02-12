#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(auto &x : b) cin>>x;
        map<int,int>mpp;
        for(int i =0;i<n;i++){
            mpp[b[i]]++;
        }
        vector<int>temp;
        int flag = 0;
        for(auto it: mpp){
           int a = it.first;
           int b = it.second;
           if(b%a!=0){
            flag = 1;
            break;
           }
           
        }
        if(flag == 1){
            cout<<-1;
        }
        else{
         vector<int>ans(n);
         int cur = 1;
         map<int,int>used;
         for(int i = 0;i<n;i++){
            int x = b[i];
            ans[i] = cur;
            used[x]++;
            if(used[x]==x){
                used[x] = 0;
                cur++;
            }
         }
         for(auto it : ans) cout<<it<<" ";

        }
       
        cout<<'\n';

    }
}