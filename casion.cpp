#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin>>t;
     while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));
        int i=0,j=0;
        for( i =0;i<n;i++){
            for(j =0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int k = 0;
        long long sum  = 0;
    for(i=0;i<n;i++){
        for(j =i+1;j<n;j++){
            for(k=0;k<m;k++){
                if(i+1<n){
                    sum += abs(v[i][k]-v[j][k]);
                }
            }
        }
    }
        cout<<sum<<endl;
     }
}