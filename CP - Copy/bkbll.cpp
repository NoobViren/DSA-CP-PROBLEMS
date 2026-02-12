#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l = n-1,r=n-1;
    int count = 0;
    while(r>=0){
        long long a = (l-r+1)*v[l];
        if(a>d){
            count++;
            l=r;
           
            l--;
        }
        r--;
    }
    cout<<count<<endl;
}