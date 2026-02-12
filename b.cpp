#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n),a(n);
        for(auto &x : p) cin>>x;
        for(auto &y : a) cin>>y;
        int prev = -1;
        map<int,int>mpp;
        for(int i = 0;i<n;i++){
            mpp[p[i]] = i;

        }
        int flag = 0;
        for(int i = 0;i<n;i++){
            if(prev == -1){
                prev = mpp[a[i]];
            }
            else{
                if(mpp[a[i]]<prev){
                    flag = 1;
                    break;
                    
                }
                else{
                    prev = mpp[a[i]];
                }
            }
        }
        if(flag == 0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}