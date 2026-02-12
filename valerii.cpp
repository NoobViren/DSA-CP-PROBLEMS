#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int j = 0;j<n;j++){
            cin>>b[j];
            
        }
        vector<int>p(n);
        p[0] = b[0];
        int i = 1;
        for(i = 1;i<n;i++){
            p[i] = p[i-1] + b[i];
        }
       unordered_map<int,int>mpp;
        for(i=0;i<n;i++){
            mpp[p[i]]++;
        }
        int flag = 0;
        for(i=0;i<n;i++){
            for(int k = i+1;k<n;k++){
                int sum = p[i]+p[k];
                if(sum%2==0 && mpp.find(sum/2)!=mpp.end()){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag ==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}