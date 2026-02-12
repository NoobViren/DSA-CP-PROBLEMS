#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int ans = n*(n+1)/2;
       if(ceil(sqrt(ans))==floor(sqrt(ans))){
                cout<<-1;
       }
        else{
            cout<<2<<" "<<1<<" ";
            if(n>2 && n<8){
                int k = 3;
            while(k<=n){
                cout<<k<<" ";
                k+=1;
            }
        }
            else if(n>8){
                int k = 3;
                while(k<=n){
                    if(k==8){
                        cout<<9<<" "<<8<<" ";
                        k+=2;
                    }
                    else {
                        cout<<k<<" ";
                        k+=1;
                    }
                }
            }
         
        }
        cout<<'\n';
    }
}
