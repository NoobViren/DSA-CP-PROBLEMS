#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        s+=s;
        int m = 0;
        int count = 0;
        int i = 0;
        while(i<s.size()){
            while(s[i] == '0'){
                count ++;
                i++;
            }
            i++;
            m = max(m,count);
            count = 0;
        }
        cout<<m<<'\n';
    }
}