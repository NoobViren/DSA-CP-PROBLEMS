#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        vector<int>v = a;
        sort(a.begin(),a.end());
        vector<int>temp;
        for(int i= 0;i<n;i++){
            if(a[i]==v[i]){
                temp.push_back(i);
            }
        }
        if(temp.size()==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<'\n';
            cout<<n-temp.size()<<'\n';
            int k = 0;
            for(int i = 0;i<n;i++){
                if(k<temp.size() && i==temp[k]){
                    k++;
                }
                else{
                    cout<<v[i]<<" ";
                }
            }
            cout<<'\n';
        }
    }
}