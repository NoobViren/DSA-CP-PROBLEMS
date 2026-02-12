#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mpp;
        int k = 0;
        

        for(int i = 0;i<n;i++){
            mpp[s[i]]++;
            if(mpp[s[i]]>1){
              k = i;
              
              break;

            }
        }
        mpp.clear();
        for(int j = k;j<n;j++){
            mpp[s[j]]++;

        }
        int a = mpp.size();
        cout<<a+k<<endl;
        
    }
}