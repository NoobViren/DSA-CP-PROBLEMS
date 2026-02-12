#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mpp;
        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int d = 0;
        
        for(int j =1;j<=n-2;j++){
            if(mpp[s[j]]>=2){
                d =1;
                break;
            }
        }
        if(d==1){
            cout<<"Yes"<<endl;
        }
        else{
          cout<<"No"<<endl;
        }
    }
    
    }

