#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool count = 0;
        int i = 0;
        if(k==0 && s[0]<s[n-1]){
            cout<<"YES"<<endl;
        }
        else if(k==0 && s[0]>s[n-1]){
            cout<<"NO"<<endl;
        }
        else{
        for(i = n-1;i>=0;i--){
            if(s[i]<s[n-1] || s[i]>s[0]){
                if(k>=1){
                    count = true;
                }
                break;
            }
    }
    if(count ){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
        
}
}
}
