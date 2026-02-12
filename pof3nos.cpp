#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        int flag = 0;
        vector<int>temp;
        int k = n;
        for(int i =2;i<=sqrt(n);i++){
            if(k%i==0){
                count++;
                k = k/i;
                temp.push_back(i);
            }
            if(count==2){
                flag = 1;
                break;
            }
        }
        if(flag == 0 || temp[0]==temp[1] || temp[1] == k || temp[0]==k){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
           for(auto it : temp){
            cout<<it<<" ";
           }
           cout<<k<<'\n';
        }
    }
}
