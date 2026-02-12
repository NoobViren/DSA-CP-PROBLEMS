#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            cin>>v[j];
        }
        int l = 0,r= n-1;
        while(l<n){
            if(v[l]==1){
                break;
            }
            l++;
        }
        while(r>=0){
            if(v[r]==1){
                break;
            }
            r--;
        }
        if(x>=r-l+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}