#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c ;
        cin>>c;
        string s;
        cin>>s;
        vector<int>a(n);
        
        a[n-1] = (s[n-1] == 'g')?n-1:-1;
        for(int i = n-2;i>=0;i--){
            if(s[i] == 'g'){
                a[i] = i;
            }
            else a[i] = a[i+1];
        }
        int k = 0;
        for(int i = 0;i<n;i++) {
        if(s[i]=='g'){
             k = i; 
            break;
        }
    }
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == c){
                if( a[i]!=-1){
                    ans = max(ans,a[i]-i);
                }
                else ans = max(ans,n-i+k);
            }
        }
        cout<<ans<<'\n';
    }
}