#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='0') c1++;
            else c2++;
        }
        if(c1==c2) {
            cout<<0<<endl;
        }
        else{
            cout<<abs(c1-c2)<<endl;
        }
    }
    return 0;
}