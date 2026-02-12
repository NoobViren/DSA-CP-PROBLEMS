#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());
        if(v[0]!=1){
            cout<<"NO"<<endl;
        }
        else{
        long long sum = v[0];
        int j = 1;
        for( j = 1;j<n;j++){
            if(sum<v[j]){
                
                cout<<"NO"<<endl;
                break;
            }
            sum +=v[j];
        }
        
        if(j==n){
            cout<<"YES"<<endl;
        }
     }
    }
}