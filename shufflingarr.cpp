#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x : v){
            cin>>x;
        }
        int check = 0;
        for(int i = 1;i<n;i++){
            if(v[i]-v[i-1]<=1){
                check = 1;
                break;
            }
        }
        if(check==1){
            cout<<0<<endl;
        }
        else{
        int count = 0;
        int flag = 0;
        for(int i = 2;i<n;i++){
            
            int k = max(v[i-1],v[i-2]);
            int m = min(v[i-1],v[i-2]);
            if( v[i]>k && v[i]-k>1){
                v[i-1] = k;
              
            }
            else if(v[i]>k && v[i]-k==1){
                count++;
                flag = 1;
                break;
            }
            else if(v[i]<=k && v[i]>=m){
                count++;
                flag = 1;
                break;
            }
            else if(v[i]<m && m-v[i]>1){  
                         
                v[i-1] = m;
            }
            else if(v[i]<m && m-v[i]==1){
                count++;
                flag = 1;
                break;
            }
        }
        if(count>0 && flag ==1){
            cout<<count<<'\n';
        }
        else if(flag ==0){
            cout<<-1<<'\n';
        }
    }
}
}