#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int l = n-1,r=n-1;
        int sum = 0;
        int count = 0;
        int flag = 0;
        while(r>=0){
         int m = min(v[r],v[l]);
         
         if((l-r+1)*m>=x){
            count++;
            
            flag = -1;
         }
         else flag = 0;
         r--;
         if(flag == -1){
              l=r;
         }

        }
        cout<<count<<endl;
    }
}