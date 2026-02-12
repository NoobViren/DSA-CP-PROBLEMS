#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = 2;
    int flag = 0;
    while(k<n){
      if(n%k == 0){
        flag = 1;
        break;
      }
      n-=(n/k);
      k++;
    }
    if(flag == 1){
        cout<<"NO"<<'\n';
    }
    else cout<<"YES"<<'\n';
}