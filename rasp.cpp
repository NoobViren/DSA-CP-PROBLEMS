#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        
        for(int j = 0;j<n;j++){
            cin>>v[j];
        }
        if(k==4){
            int c = 0;
            int k = 0;
            int ans=-1;
            for( k = 0;k<n;k++){
                 if(v[k]%4==0){
                   ans = 0;
                   break;
                }
               else if(v[k]%2==0  ){
                    c++;
                }
                
                
                if(c==2){
                    ans=0;
                    break;
                }
        }
       if(ans==0){
    cout<<0<<endl;
       }
       else{
        int d = 0;
        int s = 0;
        for(int x = 0;x<n;x++){
            if(v[x]%4==3){
              s++;
            }
            if(v[x]%2!=0){
                d++;
            }
        }
        if(s>=1){
            cout<<1<<endl;
        }
       else if(c==1 && d>=1){
            cout<<1<<endl;
        }
        else if(c==0 && d>=1){
            cout<<2<<endl;
        }
       }
            
        }
        else{
        int flag = 0;
        for(int i = 0;i<n;i++){
            v[i] = v[i]%k;
            if(v[i]==0){
                flag = 1;
            }
        }
        if(flag==1){
            cout<<0<<endl;
        }
        else{
        sort(v.begin(),v.end());
        int ans = k - v[n-1];
        cout<<ans<<endl;
        }
    }
 }
}