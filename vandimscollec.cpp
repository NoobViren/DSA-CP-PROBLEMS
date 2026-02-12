#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<int,int>mpp;
        for(int i = 0;i<s.size();i++){
            mpp[s[i]-'0']++;
        }
        for(int j = 0;j<s.size();j++){
            for(int k = 9-j;k<=9;k++){
                if(mpp[k]>0){
                    cout<<k;
                    mpp[k]--;
                    break;
                }
            }
        }
        cout<<endl;
    }
}