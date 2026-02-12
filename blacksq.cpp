#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q;
    cin>>p>>q;
    int x,y;
    cin>>x>>y;
    if(x>=p && x<=p+99 && y>=q && y<=q+99){
        cout<<"Yes"<<'\n';
    }
    else cout<<"No"<<'\n';
}