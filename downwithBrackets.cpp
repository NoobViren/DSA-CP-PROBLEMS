#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count =0;
        int i = 0;
        for( i = 0;i<s.size();i++){
            if(s[i]=='(') count++;
            else count--;
            if(count==0){
                break;
            }
        }
        if(i==s.size()-1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}