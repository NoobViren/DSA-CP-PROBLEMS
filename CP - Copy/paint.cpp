#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            cin>>v[j];
        }
        int m = *max_element(v.begin(),v.end());
        int flag = 0;
        int ans=0;
        for(int i = 1;i<m;i++){
            int flag = 0;
            for(int k = 0;k<v.size()-1;k++){
                if((v[k]%i==0 && v[k+1]%i==0) || (v[k]%i!=0 && v[k+1]%i!=0)){
                   flag = 1;
                    break;
                }
                
            }
            if(flag ==0){
                ans = i;
                    break;
                }
        }
        if(flag==0){
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }
}