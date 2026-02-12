#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(auto &x:v){
            cin>>x;

        }
        vector<long long>m(n);
        vector<long long>p(n);
        p[n-1] = v[n-1];
        m[0] = v[0];
        for(int i =n-2;i>=0;i--){
            p[i] = p[i+1] + v[i];
        }
        
        for(int i = 1;i<n;i++){
               m[i] = max(v[i],m[i-1]);
         }
         cout<<m[n-1]<<" ";
        for(int i = n-1;i>=1;i--){
           cout<<p[i] +m[i-1]<<" ";
        }
        cout<<'\n';
    }
}